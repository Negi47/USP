#include <stdio.h>
#include <iostream>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[])
{
	int fd;
	
	if((fd=creat(argv[1],O_CREAT|O_EXCL))== -1)
		perror("Flie already exist");
	else
		cout<<"File created with name: "<<argv[1]<<endl;
}