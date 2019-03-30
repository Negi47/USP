#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<limits.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

int main(int args, char* argv[])
{

	int fd_1, fd_2;

	if((fd_1=link(argv[1],argv[2]))==-1)
	{
		perror("File is not there");
	}
	else
	{
		cout<<"Hard link created with the name of: "<<argv[2]<<"\n";
		unlink(argv[1]);
	}
		

	return 0;
}