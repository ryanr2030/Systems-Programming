#include <stdio.h>
#include <unistd.h>
main(){
	int i,j;
	j=0;
	printf("Ready to fork...\n");
	i=fork();
	if(i==0){
		printf("the child executes this code.\n");
		for(i=0; i<5;i++){
			j=j+i;}
		printf("child j=%d\n",j);
	}
	else{
		j=wait();
		printf("The parent exectures this code.\n");
		printf("Parent j=%d\n",j);
	}
}
