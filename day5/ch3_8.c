#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	struct stat statbuf;

	stat("linux.txt", &statbuf);
	printf("BNefore Link Count = %d\n", (int)statbuf.st_nlink);

	// link() 함수를 사용해 linux.ln 하드링크 생성
	link("linux.txt", "linux.ln");

	stat("linux.txt", &statbuf);
	printf("After Link Count = %d\n", (int)statbuf.st_nlink);
}
