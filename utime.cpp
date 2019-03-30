#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<utime.h>
#include<fcntl.h>
#include<stdio.h>
#include <stdlib.h> 
using namespace std;

// To check user real permissions of the file

int main(int args, char* argv[])
{
	int fd;
	struct utimbuf utimeStruct;

	utimeStruct.actime  = 12313123;
  	utimeStruct.modtime = 13212313;


	if((fd =  utime( argv[1], &utimeStruct ) != 0))
	{
       perror("Unable to set time \n");
    }
    

	return 0;
}