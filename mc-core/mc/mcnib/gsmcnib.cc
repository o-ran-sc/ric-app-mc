/* ------------------------------------------------
 Copyright 2014 AT&T Intellectual Property
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 ------------------------------------------- */
#include <app.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>


#include "gsconfig.h"
#include "gstypes.h"
#include "gshub.h"

#include <schemaparser.h>

#include <sdl/syncstorage.hpp>

using namespace std;

//	data type definitions from sdl
using Namespace = std::string;
using Key = std::string;
using Data = std::vector<uint8_t>;
using DataMap = std::map<Key, Data>;
using Keys = std::set<Key>;



#define MAXLINE 100000
static unsigned tcpport=0;
static char linebuf[MAXLINE];
int listensockfd=0;
int fd=0;

FILE* outf;

// Not all systems have timersub defined so make sure its ther
#ifndef timersub

#define timersub(tvp, uvp, vvp)                                         \
do {                                                            \
(vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec;          \
(vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec;       \
if ((vvp)->tv_usec < 0) {                               \
(vvp)->tv_sec--;                                \
(vvp)->tv_usec += 1000000;                      \
}                                                       \
} while (0)

#endif

void hand(int iv) {
    ftaapp_exit();
    fprintf(stderr, "exiting via signal handler %d...\n", iv);
    exit(1);
}

static void wait_for_client() {
    struct sockaddr_in serv_addr,cli_addr;
    socklen_t clilen;
    if (listensockfd==0) {
		gs_int32_t on = 1;
		listensockfd=socket(AF_INET, SOCK_STREAM, 0);
        if (listensockfd < 0) {
			gslog(LOG_EMERG,"Error:Could not create socket for tcp data stream");
			exit(1);
		}
		bzero((char *) &serv_addr, sizeof(serv_addr));
		serv_addr.sin_family = AF_INET;
		serv_addr.sin_addr.s_addr = INADDR_ANY;
		serv_addr.sin_port = htons(tcpport);
#ifndef __linux__
        /* make sure we can reuse the common port rapidly */
        if (setsockopt(listensockfd, SOL_SOCKET, SO_REUSEPORT,
                       (gs_sp_t )&on, sizeof(on)) != 0) {
            gslog(LOG_EMERG,"Error::could not set socket option\n");
            exit(1);
        }
#endif
        if (setsockopt(listensockfd, SOL_SOCKET, SO_REUSEADDR,
                       (gs_sp_t )&on, sizeof(on)) != 0) {
            gslog(LOG_EMERG,"Error::could not set socket option\n");
            exit(1);
		}
        
		if (bind(listensockfd, (struct sockaddr *) &serv_addr,
                 sizeof(serv_addr)) < 0) {
			gslog(LOG_EMERG,"Error:Could not bind socket for tcp data stream");
            exit(1);
        }
	}
    
	do {
		listen(listensockfd,5);
		clilen = sizeof(cli_addr);
		fd=accept(listensockfd, (struct sockaddr *) &cli_addr, &clilen);
		if (fd<0) {
            gslog(LOG_EMERG,"Error:Could not accept connection on tcp socket");
		}
	} while (fd==0);
}


static void emit_socket() {
	unsigned o,w,l;
	o=0;
	w=0;
	l=strlen(linebuf);
	do {
		if((w=write(fd,&linebuf[o],l))==0) {
			close(fd);
			wait_for_client();
		}
		o=o+w;
	} while (o<l);
}

static void emit_line() {
    
    if (tcpport==0) {
        fprintf(outf,"%s",linebuf);
    } else {
        emit_socket();
    }
    
}

int split_string(char *instr,char sep, char **words,int max_words){
   char *loc;
   char *str;
   int nwords = 0;

   str = instr;
   words[nwords++] = str;
   while( (loc = strchr(str,sep)) != NULL){
        *loc = '\0';
        str = loc+1;
        if(nwords >= max_words){
                fprintf(stderr,"Error in split_string, too many words discovered (max is %d)\n",max_words);
                nwords = max_words-1;
        }
        words[nwords++] = str;
   }

   return(nwords);
}

std::vector<string> split_string(const string &str, char sep){
	char *instr = strdup(str.c_str());
	char *words[1000];
	int nwords = split_string(instr, sep, words, 1000);
	vector<string> ret;
	for(int i=0;i<nwords;++i){
		ret.push_back(words[i]);
	}
	delete instr;
	return ret;
}

vector<uint8_t> packData(const char *d, int len){
	const uint8_t *d8 = (const uint8_t *)d;
	return Data(d8, d8+len+1);
}



int main(int argc, char* argv[]) {
    gs_sp_t me = argv[0];
    FTAID fta_id;
    gs_int32_t schema, ch;
    
    FTAID rfta_id;
    gs_uint32_t rsize;
    gs_uint32_t bufsz=8*1024*1024;
    gs_int8_t rbuf[2*MAXTUPLESZ];
    
    gs_int32_t numberoffields;
    gs_int32_t verbose=0;
    gs_int32_t y, lcv;
    
    void *pblk;
    gs_int32_t pblklen;
	gs_int32_t n_actual_param;
	gs_int32_t n_expected_param;
    gs_int32_t xit = 0;
    gs_int32_t dump = 0;
    struct timeval tvs, tve, tvd;
    gs_retval_t code;
    endpoint gshub;
    endpoint dummyep;
    gs_uint32_t tip1,tip2,tip3,tip4;
    gs_sp_t instance_name;

	string keys_s;
	vector<string> keys_v;
	vector<int> keys_i;

    gs_uint32_t tlimit = 0;     // time limit in seconds
    time_t start_time, curr_time;
    
	gsopenlog(argv[0]);

    // by default the output will go to stdout
    outf = stdout;
    
    while ((ch = getopt(argc, argv, "l:p:r:veXDK:")) != -1) {
        switch (ch) {
            case 'r':
                bufsz=atoi(optarg);
                break;
            case 'p':
                tcpport=atoi(optarg);
                break;
            case 'v':
                verbose++;
                break;
            case 'e':
                outf = stderr;
                break;
            case 'X':
                xit++;
                break;
            case 'D':
                dump++;
                break;
            case 'l':
                tlimit = atoi(optarg);
                break;
			case 'K':
				keys_s = optarg;
				keys_v = split_string(keys_s, ',');
				break;
            default:
            usage:
                fprintf(stderr, "usage: %s [-r <bufsz>] [-e] [-p <port>] [-l <time_limit>] [-v] [-X] [-D] [-K comma_separated_key_fields] <gshub-hostname>:<gshub-port> <gsinstance_name>  query param1 param2...\n", *argv);
                exit(1);
        }
    }
    argc -= optind;
    argv += optind;
    if (argc<3) goto usage;
    
    if (sscanf(argv[0],"%u.%u.%u.%u:%hu",&tip1,&tip2,&tip3,&tip4,&(gshub.port))!= 5 ) {
        gslog(LOG_EMERG,"HUB IP NOT DEFINED");
        exit(1);
    }
    gshub.ip=htonl(tip1<<24|tip2<<16|tip3<<8|tip4);
    gshub.port=htons(gshub.port);
    instance_name=strdup(argv[1]);
    if (set_hub(gshub)!=0) {
        gslog(LOG_EMERG,"Could not set hub");
        exit(1);
    }
    if (set_instance_name(instance_name)!=0) {
        gslog(LOG_EMERG,"Could not set instance name");
        exit(1);
    }
    
    if (get_initinstance(gshub,instance_name,&dummyep,1)!=0) {
        gslog(LOG_EMERG,"Did not receive signal that GS is initiated\n");
    }
    
    gettimeofday(&tvs, 0);
    argc -=2;
    argv +=2;
    if (argc < 1)
        goto usage;
    
    /* initialize host library and the sgroup  */
    
    if (verbose>=2) fprintf(stderr,"Inializin gscp\n");
    
    if (ftaapp_init(bufsz)!=0) {
        fprintf(stderr,"%s::error:could not initialize gscp\n", me);
        exit(1);
    }
    
    signal(SIGTERM, hand);
    signal(SIGINT, hand);

	Namespace ns("mcnib");	
	string key_base = argv[0];
    
    schema = ftaapp_get_fta_schema_by_name(argv[0]);
    if (schema < 0) {
        fprintf(stderr,"%s::error:could not get fta '%s' schema\n",
                me ,argv[0]);
        exit(1);
    }
	n_expected_param = ftaschema_parameter_len(schema);
    if (n_expected_param == 0) {
        pblk = 0;
        pblklen = 0;
    } else {
        /* parse the params */
		n_actual_param = argc-1;
		if(n_actual_param < n_expected_param){
			fprintf(stderr,"Error, %d query parameters expected, %d provided.\n",n_expected_param, n_actual_param);
			exit(1);
		}
        for (lcv = 1 ; lcv < argc ; lcv++) {
            char *k, *e;
            int rv;
            k = argv[lcv];
            e = k;
            while (*e && *e != '=') e++;
            if (*e == 0) {
                fprintf(stderr,"param parse error '%s' (fmt 'key=val')\n",
                        argv[lcv]);
                exit(1);
            }
            *e = 0;
            rv = ftaschema_setparam_by_name(schema, k, e+1, strlen(e+1));
            *e = '=';
            if (rv < 0) {
                fprintf(stderr,"param setparam error '%s' (fmt 'key=val')\n",
                        argv[lcv]);
                exit(1);
            }
        }
        if (ftaschema_create_param_block(schema, &pblk, &pblklen) < 0) {
            fprintf(stderr, "ftaschema_create_param_block failed!\n");
            exit(1);
        }
    }
    ftaschema_free(schema); /* XXXCDC */
    
    
    if (verbose>=2) fprintf(stderr,"Initalize FTA\n");
    
    fta_id=ftaapp_add_fta(argv[0],0,0,0,pblklen,pblk);
    if (fta_id.streamid==0) {
        fprintf(stderr,"%s::error:could not initialize fta %s\n",
                me, argv[0]);
        exit(1);
    }
    /* XXXCDC: pblk is malloc'd, should we free it? */
    
    if (verbose>=2) fprintf(stderr,"Get schema handle\n");
    
    if ((schema=ftaapp_get_fta_schema(fta_id))<0) {
        fprintf(stderr,"%s::error:could not get schema\n", me);
        exit(1);
    }
    
    if ((numberoffields=ftaschema_tuple_len(schema))<0) {
        fprintf(stderr,"%s::error:could not get number of fields in schema\n",
                me);
        exit(1);
    }
    
    if (verbose>=1) {
        for(y=0; y<numberoffields;y++) {
            printf("%s",ftaschema_field_name(schema,y));
            if (y<numberoffields-1) printf("|");
        }
        printf("\n");
    }
    if (xit) {
        gettimeofday(&tve, 0);
        timersub(&tve, &tvs, &tvd);
        printf("TIME= %ld.%06ld sec\n", tvd.tv_sec, tvd.tv_usec);
        hand(0);
    }
    if (tcpport!=0) {
    	wait_for_client();
    }

// Get the vector of keys, bail out if there is a mismatch
	for(int ki=0;ki<keys_v.size();++ki){
		int fi;
		for(fi=0; fi<numberoffields;fi++) {
			if(ftaschema_field_name(schema, fi) == keys_v[ki]){
				keys_i.push_back(fi);
				break;
			}
		}
		if(fi>=numberoffields){
			fprintf(stderr,"ERROR key field %s is not in the schema.\n",keys_v[ki].c_str());
			exit(1);
		}
	}

//		Get SDL handle
	std::unique_ptr<shareddatalayer::SyncStorage> sdl(shareddatalayer::SyncStorage::create());

    start_time = time(NULL);

    while((code=ftaapp_get_tuple(&rfta_id,&rsize,rbuf,2*MAXTUPLESZ,0))>=0) {
        if (dump)
            continue;
        if (ftaschema_is_eof_tuple(schema, rbuf)) {
            /* initiate shutdown or something of that nature */
            printf("#All data proccessed\n");
            exit(0);
        }
        if (!rsize)
            continue;
        if (verbose >=2) {
            snprintf(linebuf,MAXLINE,"RESULT CODE => %u\n",code);
            emit_line();
        }

        if ((code==0)&&(rfta_id.streamid == fta_id.streamid)) {
			string key = key_base;
			for(int fi=0;fi<keys_i.size();++fi){
				y = keys_i[fi];	//n match gsprintconsole
                access_result ar=ftaschema_get_field_by_index(schema,y,rbuf,rsize);
                switch (ar.field_data_type) {
                    case INT_TYPE:
						key += ":"+to_string(ar.r.i);
                        break;
                    case UINT_TYPE:
						key += ":"+to_string(ar.r.ui);
                        break;
                    case IP_TYPE:
                        snprintf(linebuf,MAXLINE,"%u.%u.%u.%u",ar.r.ui>>24&0xff,
                                 ar.r.ui>>16&0xff,
                                 ar.r.ui>>8&0xff,
                                 ar.r.ui&0xff);
						key += ":"+string(linebuf);
                        break;
                    case IPV6_TYPE:
                    {
                        unsigned x;
                        unsigned zc=0;
                        for(x=0;x<4;x++) { if (ar.r.ip6.v[x]==0) zc++;}
                        if (zc!=4) {
                            for(x=0;x<8;x++) {
                                unsigned char * a = (unsigned char *)  &(ar.r.ip6.v[0]);
                                unsigned y;
                                y=((unsigned)a[2*x])<<8|((unsigned) a[2*x+1]);
                                snprintf(&linebuf[strlen(linebuf)],MAXLINE,"%04x",y);
                                if (x<7) snprintf(&linebuf[strlen(linebuf)],MAXLINE,":");
                            }
                        } else {
                            snprintf(linebuf,MAXLINE,"::");
                        }
						key += ":"+string(linebuf);
                    }
                    break;
                    case USHORT_TYPE:
						key += ":"+to_string(ar.r.ui);
                        break;
                    case BOOL_TYPE:
                        if (ar.r.ui==0) {
							key += ":FALSE";
                        } else {
							key += ":TRUE";
                        }
                        break;
                    case ULLONG_TYPE:
						key += ":"+to_string(ar.r.ul);
                        break;
                    case LLONG_TYPE:
						key += ":"+to_string(ar.r.l);
                        break;
                    case FLOAT_TYPE:
						key += ":"+to_string(ar.r.f);
                        break;
                    case TIMEVAL_TYPE:
                    {
                        gs_float_t t;
                        t= ar.r.t.tv_usec;
                        t=t/1000000;
                        t=t+ar.r.t.tv_sec;
                        snprintf(linebuf,MAXLINE,"%f sec",t);
						key += ":"+string(linebuf);
                    }
                        break;
                    case VSTR_TYPE:
                    {
                        int x;
                        int c;
                        int d=0;
                        char * src;
                        src=(char*)ar.r.vs.offset;
                        if(d<MAXLINE){
                            linebuf[d] = '\0';
                        }
                        for(x=0;x<ar.r.vs.length;x++) {
                            c=src[x];
                            if ((c<='~') && (c>=' ')) {
                                if (d<MAXLINE-1) {
                                    linebuf[d]=c;
                                    linebuf[d+1]=0;
                                    d++;
                                }
                            } else {
                                if (d<MAXLINE-1) {
                                    linebuf[d]='.';
                                    linebuf[d+1]=0;
                                    d++;
                                }
                            }
                        }
						key += ":"+string(linebuf);
                    }
                        break;
                    default:
                        linebuf[0]=0;
                        break;
                }
            }
			if(keys_i.size()==0){
				key += ":";
			}
			DataMap D;
			D[key] = packData(rbuf, rsize);
			sdl->set(ns, D);

        } else {
            if (rfta_id.streamid != fta_id.streamid)
                fprintf(stderr,"Got unkown streamid %llu \n",rfta_id.streamid);
        }

        // whenever we receive a temp tuple check if we reached time limit
        if ((code==2)  && tlimit && (time(NULL)-start_time)>=tlimit) {
            fprintf(stderr,"Reached time limit of %d seconds\n",tlimit);    
            ftaapp_exit();
            exit(0);
        }        
    }
}

