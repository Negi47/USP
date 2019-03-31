#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <fcntl.h>

using namespace std;

int main(int argc, char* argv[])
{
	int fd;

	fd = access(argv[1],W_OK);

	if(fd==-1)
		perror("File does not exist");
	else
		cout<<"File Exist"<<endl;
}