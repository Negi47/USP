#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
void my_exit1(void){
	printf("1st Exit Handler\n");
}
void my_exit2(void){
	printf("2nd Exit Handler\n");
}
int main(void)
{
	if(atexit(my_exit2)!=0)
		perror("atexit");
	if(atexit(my_exit1)!=0)
		perror("atexit");
	if(atexit(my_exit1)!=0)
		perror("atexit");
	printf("Main is done\n");
	return 0;
}