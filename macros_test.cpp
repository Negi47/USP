#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L

#include<unistd.h>
#include<iostream>
using namespace std;

int main()
{
	#ifdef _POSIX_JOB_CONTROL
		cout<<"Job control enabled\n";
	#else
		cout<<"Not supported\n";
	#endif

	#ifdef _POSIX_SAVED_IDS
		cout<<"System supports saved Gids and Uids\n";
	#else
		cout<<"Not supported IDs\n";
	#endif

	#ifdef _POSIX_CHOWN_RESTRICTED
		cout<<"CHOWN restricted option is: "<<_POSIX_CHOWN_RESTRICTED<<"\n";
	#else
		cout<<"User andmin access\n";
	#endif

	#ifdef _POSIX_NO_TRUNC
		cout<<"Path trunc option is: "<<_POSIX_NO_TRUNC<<"\n";
	#else
		cout<<"System doesn't suport wide path name trunc options\n";
	#endif

	#ifdef _POSIX_VDISABLE
		cout<<"Disable character for terminal files is"<<_POSIX_VDISABLE<<"\n";
	#else
		cout<<"System doesn't support Vdisable\n";
	#endif

	return 0;
}