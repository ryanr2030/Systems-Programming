#include <stdio.h>
main(){
	int a=0;
	int n;
	for(int i=7; i>=0; i--){
		printf("%d ", (a&(1<<i))>>i);
	}

	int p=3;
	while(p!=0){
		int test;
		printf("\n Enter 1 to set a bit, 2 to clear a bit, or 0 to exit: ");
		scanf("%d",&p);
		if(p==1){
			test=0;
			while(test==0){
				printf("\nWhat bit would you like to set (0-7)? ");
				scanf("%d",&n);
				if(n>=0 && n<8){
					a=a|(1<<n);
					test=1;
				
					for(int i=7; i>=0; i--){
						printf("%d ", (a&(1<<i))>>i);
					}
					printf("\n");

				}
				else
					printf("\nInvalid input.");
			}
		}	
		else if(p==2){
			test=0;
			while(test==0){
				printf("\nWhat bit would you like to clear (0-7)? ");
				scanf("%d",&n);
				if(n>=0 && n<8){
					a=a&(~(1<<n));
					test=1;
					
					for(int i=7; i>=0; i--){
						printf("%d ", (a&(1<<i))>>i);
					}
					printf("\n");
				}
				else{
					printf("\nInvalid input.");
				}
			}
		}		
		else if(p>2 || p>0){
			printf("\nInvalid input.");	
		}
	}
	printf("\n Final Bit Upon exit: ");
	for(int i=7; i>=0; i--){
		printf("%d ", (a&(1<<i))>>i);
	}
	printf("\n");			
}
