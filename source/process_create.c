#include<copy.h>

int process_create(const char * srcfile,const char* destfile,int pronum,int blocksize){
     int i = 0;
	   pid_t pid;
	   for(i;i<pronum;i++){
          pid = fork();
		    if(pid==0){
			     int offset = i*blocksize;
				   char str_offset[10];
				   char str_blocksize[10];
				   bzero(str_offset,10);
				   bzero(str_blocksize,10);
				   sprintf(str_offset,"%d",offset);
				   sprintf(str_blocksize,"%d",blocksize);
				   execl("/home/colin/202510185/process_copy/Mod/copy","copy",srcfile,destfile,str_offset,str_blocksize,NULL);

			  }
	   }


     return 0;
}
