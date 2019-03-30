#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<limits.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

int main(int args, char* argv[])
{
	int fd_1,fd_2,n;


	if ((fd_1 = open(argv[1],O_RDWR))==-1)
		perror("Error Genreated");
	else
		fd_2=open(argv[2],O_RDWR|O_CREAT,0777);

	char* buf[int(sizeof(fd_1))];

	while((n = read(fd_1,buf,n))>0)
	{
		write(fd_2,buf,n);
	}

	close(fd_1);
	close(fd_2);

	return 0;
}