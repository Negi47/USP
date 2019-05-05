#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	pid_t pid1,pid2,pid3;
	if((pid1=fork())==-1)
	{
		perror("fork");
		return 0;
	}
	if(pid1==0){
		printf("\nProcess PID1:%d",getpid());
	    printf("\nParent Process PPID1:%d",getppid());
	   }
	   if(pid1>0)
	   {
	   	sleep(2);
	   	printf("\n");
	   }
	  if((pid2=fork())==-1)
	  {
	  	perror("fork");
	  	return 0;
	  }
	  if(pid2==0)
	  {
	  	printf("\nProcess PId2:%d",getpid());
	  	printf("\nParent Process PPID2:%d",getppid());

	  }
	  if(pid2>0)
	  {
	  	sleep(2);
	  	printf("\n");
	  }
	  if((pid3=fork())==-1)
	  {
	  	perror("fork");
	  	return 0;
	  }
	  if(pid3==0)
	  {
	  	printf("\nProcess PId3:%d",getpid());
	  	printf("\nParent Process PPID3:%d\n",getppid());
	  	
	  }
	  if(pid3>0){
	  	sleep(2);
	  	printf("\n");
	  }
	   return 0;

}