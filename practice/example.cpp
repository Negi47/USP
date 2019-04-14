#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

int main(int argc, char* argv[]) {

	int fd, i, j;

	char modes[] = "rwxrwxrwx", permi[10];

	struct stat st;

	if ((fd = stat(argv[1], &st)) == -1)
		perror("file not found");




	for (i=0, j = 1<<8; i<10; i++, j>>=1) {
		if (st.st_mode & j) {
			permi[i] = modes[i];
			cout << "st_mode: " << st.st_mode << " j: " << j << endl;
		}
			
		else
			permi[i] = '-';

		if (i == 8)
			cout << "-" << permi << endl;
	}


}


// 5 >> 1
// 0000 0101
// 0000 0010
// 1111 0000 (60) 60 >> 
// 0111 1000

//  0011, 1100 >> 0001 1110(30)