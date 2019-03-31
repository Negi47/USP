#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <fcntl.h>
#include <utime.h>

using namespace std;

int main(int argc, char* argv[])
{
	/** For retrieving Time before updation **/ 
	struct stat a;
	cout<<"Time Before Updating: "<<ctime(&a.st_atime)<<endl;

	/** Updating the time **/
	struct utimbuf ab;
	ab.actime = 1234625; //You have to give in milli seconds access time
	ab.modtime = 2522893; //modification time


	if((utime(argv[1],&ab))==-1)
		cout<<"Time not assigned"<<endl;
	else
		cout<<"Time assigned"<<endl;

	cout<<"Time assigned and Updated: "<<ctime(&a.st_atime)<<endl;
}