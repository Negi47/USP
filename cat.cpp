#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

int main(int args, char* argv[])
{
	int fd,n;
	char buf[12] = "THIS IS MCA";

	if ((fd = open(argv[1], O_RDWR,0777))==-1)
	{
		cout<<"File doesn't exist with this name.\n";
	}

	write(fd,buf,12);
	close(fd);
	open(argv[1], O_RDWR,0777);
	
	while((n = read(fd,buf,12))>0)
		{
			write(1,buf,n);
		}

	close(fd);


	return 0;
}