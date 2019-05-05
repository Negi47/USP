#include<signal.h>
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
using namespace std;
void handler(int signum)
{
	cout<<"\t Alarm time out...signum is:"<<signum<<endl;
	getchar();
}
int main()
{
	signal(SIGALRM,handler);
	alarm(1);
	while(1)
		cout<<"hello\t";
	return 0;
}