#include<stdio.h>
#include<stdlib.h>
int main()
{
 int ret=0;               

 for(ret=0; ret<10; ret++)
 {
	 sprintf(cmd,"udevadm info --name=/dev/video%d 
			 --attribute-walk | grep f37d",ret);
	 if(system(cmd) ==0)
	 {
		fprintf(stdout,"INternal camera\n");
		 break;
	 } }



}

