#include <stdio.h>
int Hello();
int World();
main(){
	int test[5];
	test[0]=(int)Hello();
	test[1]=(int)Hello();
	test[2]=(int)World();
	test[3]=(int)World();
	test[4]=(int)Hello();
	printf("\nResults:");
	for(int i=0; i<5;i++){
		printf("%i ",test[i]);

	}

}
