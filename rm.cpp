#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<limits.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;

int main(int args, char* argv[])
{

	unlink(argv[1]);
	return 0;
}