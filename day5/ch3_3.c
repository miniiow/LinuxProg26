#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
	struct stat statbuf;
	int kind;

	stat("linux.txt", &statbuf);

	printf("Mode = %d\n", (unsigned int)statbuf.st_mode);
	kind = statbuf.st_mode & S_IFMT;
	printf("Kind = %o\n", kind);

	switch (kind){
		case S_IFLNK:
			printf("linux.txt: Symblic Link\n");
			break;
		case S_IFDIR:
			printf("linux.txt: Directory\n");
			break;
		case S_IFREG:
			printf("linux.txt: Regulat File\n");
			break;
	}
}
