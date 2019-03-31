#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <utime.h>
#include <iostream>
#include <fcntl.h>

using namespace std;

int main(int arc, char* argv[])
{
	struct stat a;
	int fd,fd1;

	fd=open(argv[1],O_RDWR); //assuming file is der in drive

	if((fstat(fd,&a))== -1)
		cout<<"File does not exist";
	
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
 	//cout<<"File System Id: "<<a.t_dev<<endl;
 	cout<<"File mode: "<<a.st_mode<<endl;
 	cout<<"Hard Link: "<<a.st_nlink<<endl;
 	cout<<"File user Id: "<<a.st_uid<<endl;
 	cout<<"File group Id: "<<a.st_gid<<endl;
 	cout<<"File modification time"<<ctime(&a.st_mtime)<<endl;
 	cout<<"File Size: "<<a.st_size<<endl;
 	cout<<"Last Status: "<<ctime(&a.st_ctime)<<endl;



}