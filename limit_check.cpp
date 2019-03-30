#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<limits.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

int main(int args, char* argv[])
{

	int compile_limit, run_time, fd;

	if ((run_time=fpathconf(0,_PC_CHOWN_RESTRICTED))==-1)
		perror("error displayed");
	else
		cout<<"value is: "<<_PC_CHOWN_RESTRICTED<<"\n";


	fd = open(argv[1], O_RDWR,0777);


	if ((run_time=fpathconf(fd,_PC_NAME_MAX))==-1)
		perror("error displayed");
	else
		cout<<"value is: "<<_PC_NAME_MAX<<"\n";













	return 0;
}