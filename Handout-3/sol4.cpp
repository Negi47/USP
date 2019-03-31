#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main(int argc,char* argv[])
{
	int fd;

	fd = chmod(argv[1],S_IWUSR|S_IRGRP|S_IROTH|S_IXOTH);
	if(fd==-1)
		perror("Permission not assigned");
	else
		cout<<"Permission assigned "<<endl;
}

/** S_IRGRP = I stands for IS
			  
			  R stands for Read , W standd for write , X stands for Exceute
			  
			  GRP stands for Group

			  OTH stands for Others

			  USR stands for User 
**/