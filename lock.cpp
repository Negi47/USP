#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <sys/types.h>
#include <fcntl.h>

using namespace std;

int main(int argc ,char* argv[])
{
	int fd;
	struct flock a;

	fd = open(argv[1],O_RDWR|O_CREAT);

	if(fcntl(fd,F_GETLK,&a)==-1)
		cout<<"Not Locked"<<endl;
	else
		cout<<"Lock"<<endl;

	a.l_type = F_WRLCK;
	a.l_whence = SEEK_SET;
	a.l_start = 0;
	a.l_len = 0;

	if(fcntl(fd,F_SETLK,&a) == -1)
		cout<<"Not Locked"<<endl;
	else
		cout<<"Process Id is "<<a.l_pid<<endl;
		cout<<"LOck type: "<<(a.l_type==F_RDLCK ? "READ LOCK" : "WRITE LOCK")<<endl;

	a.l_type = F_UNLCK;
	a.l_whence = SEEK_SET;
	a.l_start = 0;
	a.l_len = 0;

	// to unlock
	if(fcntl(fd,F_SETLK,&a) == 0)
		cout<<" UnLocked "<<endl;

}