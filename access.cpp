#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

// To check user real permissions of the file

int main(int args, char* argv[])
{
	int fd;

	if ((fd = access(argv[1],F_OK)==-1))
	{
		perror("Can't find the file \n");
	}
	else
	{
		printf("It has Been found: %d \n",fd);

		if ((fd = access(argv[1],R_OK)==-1))
		{
			printf("No read permission \n");
		}
		else
		{
			printf("Read permission is there \n");
		}


		if ((fd = access(argv[1],W_OK)==-1))
		{
			printf("No Write permission \n");
		}
		else
		{
			printf("Write permission is there \n");
		}


		if ((fd = access(argv[1],X_OK)==-1))
		{
			printf("No execute permission \n");
		}			
		else
		{
			printf("execute permission is there \n");
		}
	}

	return 0;
}