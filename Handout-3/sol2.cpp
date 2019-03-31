#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <fcntl.h>
#include <sys/stat.h>

using namespace std;

int main(int argc,char* argv[])
{

	/** Checking whether read permission is there or not **/

	// if((access(argv[1],R_OK))==-1)
	// 	cout<<"Read Permission is not there"<<endl;
	// else
	// 	cout<<"Permission is there"<<endl;

	/**  Cheking whether write permission is there or not **/

	// if((access(argv[1],W_OK))==-1)
	// 	cout<<"Write Permission is not there"<<endl;
	// else
	// 	cout<<"Permission is there"<<endl;

	/** Checking whether File exist or not **/

	if((access(argv[1],F_OK))==-1)
		cout<<"File does not exist"<<endl;
	else
		cout<<"File Exist"<<endl;
}