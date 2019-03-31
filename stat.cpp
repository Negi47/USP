#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>
#include <fcntl.h>

using namespace std;

int main(int argc, char* argv[])
{
	int fd,fd1;

	struct stat a;
	fd1 = open(argv[1],O_RDWR); 
	fd = fstat(fd1,&a);
	if(fd==-1)
		perror("File does not exist");
	
	switch(a.st_mode & S_IFMT)
	{
		case S_IFBLK : cout<<"Block File";
						break;
		case S_IFREG : cout<<"Regular File";
						break;
		case S_IFCHR : cout<<"Character File";
						break;
		case S_IFIFO : cout<<"Fifo File";
						break;
		case S_IFLNK : cout<<"Link File";
						break;
		default: cout<<"NO File";
						break;
 	}

 	cout<<"Inode No is: "<<a.st_ino<<endl;
 	cout<<"Access Time: "<<ctime(&a.st_atime)<<endl;

}