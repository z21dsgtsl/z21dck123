#include<copy.h>

int main(int argc,char ** argv)
{
     const char * srcfile = argv[1];
	   char * destfile = argv[2];
	   int pronum;
	   if(argv[3]==0)
	   {
	      pronum = 1;
	   }else{
        pronum = atoi(argv[3]);
	   }
     check_pram(argc,srcfile,pronum);
	   int blocksize = block_cur(srcfile,pronum);
	   process_create(srcfile,destfile,pronum,blocksize);
     PROCESS_WAIT();

	   return 0;
}
