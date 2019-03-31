#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main(int argc, char* argv[])
{
	int fd,n;

	if((fd=open(argv[1],O_RDWR))==-1)
		perror("File does not exist");
	else
		//lseek(fd,2,SEEK_CUR); /** SEEK_CUR is form current position **/

		//lseek(fd,2,SEEK_SET); /** SEEK_SET is form starting position **/

		lseek(fd,3,SEEK_END); /** SEEK_END is from Ending position **/
		
		char buf[(int)sizeof(fd)];
		while((n=read(fd,buf,(int)sizeof(buf))) > 0)
		{
			write(0,buf,n);
		}
		cout<<endl;
}