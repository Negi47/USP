#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

int main(int args, char* argv[])
{
	int fd;


	// unlink(argv[1]);

	if ((fd = open(argv[1], O_WRONLY|O_CREAT,0777))==-1)
	{
		cout<<"Failed to open or create the File\n";
	}
	else
	{
		cout<<"File Created with the name:\n"<<argv[1];
	}





	return 0;
}