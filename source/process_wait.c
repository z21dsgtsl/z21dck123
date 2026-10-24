#include<copy.h>

int PROCESS_WAIT(void){
     int status;
	   while(wait(&status)!=-1)
     {}
	   return 0;
}
