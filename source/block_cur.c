#include<copy.h>

int block_cur(const char* srcfile,int pronum){
     //计算文件大小
	   int fd = open(srcfile,O_RDWR);
	   int filesize =lseek(fd,0,SEEK_END);
	   close(fd);

	   //是否能够整除
	   if(filesize % pronum ==0){
        return filesize / pronum;
	   }else{
        return filesize / pronum+1;
	   }
}
