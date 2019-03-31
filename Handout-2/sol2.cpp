#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

using namespace std;

int main(int argc,char* argv[])
{
	int fd,n;
	if((fd=open(argv[1],O_RDWR|O_CREAT, 0777))==-1)
		perror("File not able to open or create");
	else
	{
		char buf[]="Hello";
		write(fd,buf,(int)sizeof(buf));
	}	

	close(fd);

	if((fd=open(argv[1],O_RDWR|O_CREAT, 0777))==-1)
		perror("File not able to open or create");
	else
	{
		char buff[(int)sizeof(fd)];
		while((n=read(fd,buff,(int)sizeof(buff))) > 0)
		{
			write(0,buff,n);
		}
	}			
	cout<<endl;
}