#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void handler(int signo)
{
	cout<<"\nSignal handler:Catched signal num is=>"<<signo<<endl;
	exit(0);
}
int main()
{
	signal(SIGINT,handler);
	while(1)
		cout<<"hello\t";
	return 0;
}

