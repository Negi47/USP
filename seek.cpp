#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<limits.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(int args, char* argv[])
{

	int fd_1;

	char buf[] 	= "Hello";
	char buf_2[]	= "World";
	char ch;


	fd_1  = open(argv[1], O_RDWR|O_CREAT,0777);

	write(fd_1,buf,strlen(buf));
	lseek(fd_1,10,SEEK_CUR);
	write(fd_1,buf_2,strlen(buf_2));

	while(!(EOF(fd_1)))
	{
		read(fd_1, &ch, 1);
		printf("%c",ch);

	} 

	return 0;
}