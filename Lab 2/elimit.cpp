#include<sys/types.h>
#include<sys/time.h>
#include<sys/resource.h>
#include<unistd.h>
#include<iostream>
#include <stdio.h>
using namespace std;

#define doit(name) pr_limits(#name,name)
void pr_limits(char *name,int resource)
{
	struct rlimit limit;
	if((getrlimit(resource,&limit))<0)
		perror("getrlimit error for %s",name);
	printf("%-14s",name);
	if(limit.rlim_cur==RLIM_INFINITY)
		printf("(infinite)\n");
else
	printf("%10ld",limit.rlim_cur);
if(limit.rlim_max==RLIM_INFINITY)
	printf("(infinity)\n");
else
	printf("%10ld\n",limit.rlim_max);

}
int main()
{
	doit(RLIMIT_FSIZE);
	doit(RLIMIT_STACK);
	doit(RLIMIT_NOFILE);
	exit(0);
}