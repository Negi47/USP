#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

using namespace std;

int main(int argc, char* argv[])
{
	int fd,fd1,n;
	if((fd=open(argv[1],O_RDWR))==-1)
		perror("File does not exist");
	else
	{
		char buf[(int)sizeof(fd)];

		fd1=open(argv[2],O_RDWR|O_CREAT,0777);
		
		while((n=read(fd,buf,(int)sizeof(buf))) > 0)
		{
			write(fd1,buf,n);
		}
	}	

	close(fd1);
	close(fd);
	unlink(fd);
	cout<<"File renamed: "<<argv[2]<<endl;
}