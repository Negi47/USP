#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	signal(SIGINT,SIG_IGN);
	while(1)
		cout<<"hello\t";
	return 0;
}
