#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<iostream>
#include<fcntl.h>
#include<utime.h>
#include<time.h>
#include <sys/stat.h>
using namespace std;
int main(int argc,char* argv[])
{
	struct stat a;
	//cout<<"Time Before Updating"<<ctime(&a.st_atime)<<endl;
	
	struct utimbuf ab;
	
	
	ab.modtime=222222222222; /** modififaction time **/
	// s

	if(utime(argv[1],&ab)==-1)
		cout<<"Time not assigned"<<endl;
	else {
		//cout<<"Time access:"<<a.st_atime<<endl;
		 stat(argv[1],&a);
		cout<<"Time modification:"<<a.st_mtime<<endl;
	}
		


}