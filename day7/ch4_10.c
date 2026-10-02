#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int ret;

	ret = remove("tmp.bbb");
	if(ret == -1){
		perror("Remove imp.bbb");
		exit(1);
	}

	printf("Remove tmp.bbb success!!!\n");
}
