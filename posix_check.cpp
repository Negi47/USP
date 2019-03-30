#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L

#include<unistd.h>
#include<iostream>

int main()
{
	#ifdef _POSIX_VERSION
		std::cout<<"Conformity of POSIX version "<<_POSIX_VERSION<<"\n";
	#else
		std::cout<<"Not a POSIX compliant program\n";
	#endif

	return 0;

}