#include<stdio.h>
#include<iostream>
int main()
{
	#ifdef __STDC__==0
		printf("Not an ANSI C compliant \n");
	#else
		printf("%s is running ",__FILE__);
	#endif

	return 0;
}