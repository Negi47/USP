#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
	// Hard Link created 

	// if((link(argv[1],argv[2]))==-1)
	// 	perror("link not created ");
	// else
	// 	cout<<"Link created"<<endl;


	//Soft Link created
	if((symlink(argv[1],argv[2]))==-1)
		perror("Link not created ");
	else
		cout<<"Symbolic Link created"<<endl;
}