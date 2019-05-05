#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int glob=14;
int main(void)
{
	int var=15;
	pid_t pid;
	if ((pid=vfork())==-1)
	{
		perror("fork");
		return 0;
	}
	if(pid == 0)
	{
		cout<<"Parent Process";
		glob+=2;
		var+=2;
	}
	if(pid>0) {
		sleep(2);
	}
	cout<<"Global: "<<glob<<endl;
	cout<<"Variable: "<<var<<endl;
}