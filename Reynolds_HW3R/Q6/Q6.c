#include<stdio.h>
#include <sys/stat.h> /* needed for stat() function*/

int main(int argc, char *argv[]){
	struct stat fileinfo;
	int i;
	if(argc!=2){
		printf("Usage: statfile filenam\n");
		exit(0);
	}
	i=stat(argv[1], &fileinfo);
	if (i==-1){
		printf("unable to stat %s\n", argv[1]);
		exit(0);
	}
	for(i=9; i>=0; i--){
		if(fileinfo.st_mode & (1<<i)){
			printf("1");
		}
		else{printf("0");}
	}
	printf("0\n");
	printf("size: %d\n", fileinfo.st_size);
	printf("permissions: %d\n",fileinfo.st_mode);
	printf("last modified: %d\n", fileinfo.st_mtime);
}

