#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <utime.h>
#include <iostream>

using namespace std;

int main(int arc, char* argv[])
{
	struct stat a;
	int fd;

	fd=open(argv[1],O_RDWR); //assuming file is der in drive

	if((fstat(fd1,&a))== -1)
		cout<<"File does not exist";
	else

}