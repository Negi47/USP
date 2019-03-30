#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

// To check user real permissions of the file

int main(int args, char* argv[])
{
	int fd,per;

	fd = open(argv[1], O_CREAT|O_RDWR,0111);


	printf("Choose the permissions for the file \n 1 for read, 2 for write and 3 for execute for all i.e (UGO) \n");

	printf("Enter Flag \n");
	scanf("%d", &per);

	if (per == 1)
	{
		printf("Read permission given \n");
		chmod(argv[1],0444);

	if (per == 2)
	{
		printf("Write permission given \n");
		chmod(argv[1],0222);
	}

	if (per == 3)
	{
		printf("Execute permission given \n");
		chmod(argv[1],0111);
	}

		
	

}	
	return 0;
}