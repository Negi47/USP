#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
	/* code */
	pid_t pid1,pid2,pid3;

	if((pid1=vfork())==-1){
		perror("Not able to create");
	}
	if(pid1==0){
		printf("\nProcess PID1:%d",getpid());
		printf(":\nParent Process PID1:%d:",getppid());
	
	}
	if(pid1>0)
	{
		printf("\n");
		sleep(2);
	}	
	if((pid2=vfork())==-1)
	{
		perror("fork");
		return 0;
	}
	if(pid2==0)
	{
		printf("\nProcess PID2:%d",getpid());
		printf("\nParent Process PID2:%d",getppid());
	}
	if(pid2>0)
	{
		printf("\n");
		sleep(2);
	}
	if((pid3==vfork())==-1)
	{
		perror("fork");
		return 0;
	}

	if(pid3==0)
	{
		printf("\nProcess PID3:%d",getpid());
		printf("\nParent Process PPID3:%d",getppid());

	}
	if(pid3>0){
		printf("\n");
		sleep(2);
	}
	return 0;
}	