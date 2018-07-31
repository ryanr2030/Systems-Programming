#include <stdio.h>
#include <string.h>
main(){
	char a[10][35];
	printf("Please enter 10 strings to be sorted.\n");
	for(int i=0; i<10; i++){
		printf("Enter string: ");
		scanf("%s",a[i]);
		
		//put all characters into uppercase
		for(int j=0; j<35; j++){
			if((int)a[i][j]>96 && (int)a[i][j]<123)
				a[i][j]=(int)a[i][j]-32;
		}
	}
	char tmp[35];
	strcpy(tmp,a[0]);
	
	for(int k=0;;){
		int sort=0;
		for(int i=0; i<9; i++){
			int j=i+1;
			if(strcmp(a[i], a[j])>0){
				strcpy(tmp,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],tmp);
				sort++;
			}
		}
		if(sort==0)
			break;
	}
	
	for(int i=0; i<10; i++){
		printf("%s ", a[i]);
	}
	printf("\n");

}
