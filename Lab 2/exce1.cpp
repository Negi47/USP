#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"\nExec1.cpp";
	if((execl("/home/negi/Desktop/lab2/exec2.cpp","out",NULL))!=0)
		cout<<"\nExec error";
	cout<<"\nEnd of Exec1.cpp\n";
	return 0;
}