
#include <stdio.h>
static int flag=1;
int Hello(){
	if(flag==1){
	printf("Hello ");
	flag=0;
	return 1;
	}
	return 0;
	
}

int World(){
	if(flag==0){
	printf("World\n");
	flag=1;
	return 1;
	}
	return 0;
	
}
