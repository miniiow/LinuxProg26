#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE *rfp, *wfp;
	int c;

	if((rfp = fopen("linux.txt", "r")) == NULL){
		perror("fopen: linux.out");
		exit(1);
	}

	while((c = fgetc(rfp)) != EOF){
		fputc(c, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
