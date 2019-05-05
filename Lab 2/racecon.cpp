#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
void fun(char*  str)
{
	int i=0;
	while(str[i]!='\0')
	{
		putc(str[i],stdout);
		i++;
	}
}
int main(void)
{
	pid_t pid;
	if((pid=fork())==-1)
	{
		perror("fork");
		return 0;

	}
	if(pid==0)
	{
		fun("O/P from child");

	}
	if(pid>0)
	{
		fun("O/P from parent");
	}
	exit(0);
}