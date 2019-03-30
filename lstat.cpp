#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

// To check user real permissions of the file (ls -l)

int main(int args, char* argv[])
{
	int fd;

	struct stat sb;

	if ((fd = stat(argv[1], &sb)==-1))      //Check if you can access the file
	{
		perror("Error getting the list \n");
	}


	printf("File Type is:  ");

	switch(sb.st_mode & S_IFMT) //S_IFMT was only in POSIX 1.1993 and later means Type of file. 
	{                                                   // st_mode checks the rwx mode can be used with chmod FLAGS
		case S_IFBLK: printf("Block file \n"); break;
		case S_IFREG: printf("Regular file \n"); break;
		case S_IFCHR: printf("Charachter Device file \n"); break;
		case S_IFIFO: printf("FIFO file \n"); break;
		case S_IFLNK: printf("Link file \n"); break;

		default: printf("Unknown"); break;
	}


	printf("Inode no is: %ld \n",(long)sb.st_ino);
	printf("Mode is : %ld \n",(long)sb.st_mode);
	printf("Links are : %ld \n",(long)sb.st_nlink);
	printf("Ownership  is: UID: %ld GID: %ld\n",(long)sb.st_uid, (long)sb.st_gid);
	printf("File size  is: %ld \n",(long)sb.st_size);


	printf("Last file access:         %s \n", ctime(&sb.st_atime));
    printf("Last file modification:   %s \n", ctime(&sb.st_mtime));




	return 0;
}