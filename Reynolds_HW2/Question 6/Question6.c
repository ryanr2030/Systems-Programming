#include <stdio.h>
#include <string.h>
main(){
	int n, val;

	printf("Enter number of rows and cols for the nxn matrices: ");
	scanf("%d",&n);
	int a[n][n], b[n][n], c[n][n], d[n][n];
	int *ap, *bp, *cp, *dp;
	
	//populate the matrices goes down each row col by col might need 			to flip
	ap=&(a[0][0]);
	cp=&(c[0][0]);
	for(int row=0; row<n; row++){
		for(int col=0; col<n; ap+=3,cp+=3, col++){
			printf("Enter the value inserted in Matrix A r:%i c:%i=",row,col);
			scanf("%d",&val);
			*ap=val;
			*cp=val;
			
		}
	
	}
	
	bp=&(b[0][0]);
	cp=&(c[0][0]);
	for(int row=0; row<n; row++){
		for(int col=0; col<n; bp+=3,cp+=3, col++){
			printf("Enter the value inserted in Matrix B r:%i c:%i=",row,col);
			scanf("%d",&val);
			*bp=val;
			*cp+=val;
		}
	
	}
	
	//matrix addition: add each element in the corresponding row and col performed during the initialization loops
	printf("Matrix Addition:");
	cp=&(c[0][0]);
	for(int row=0; row<n; row++){
		printf("\n");
		for(int col=0; col<n;col++, cp+=3){
			printf("r%dc%d: %d \t",row,col,*cp);
			
		}
	}


	//matrix multiplication:
	printf("\n\nMatrix Multiplication:\n");
	ap=&(a[0][0]);
	bp=&(b[0][0]);
	dp=&(d[0][0]);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++, dp+=3, bp+=3,ap+=3){
			*dp=(*(ap)*(*(bp)));
		}
	}
	dp=&(d[0][0]);
	for(int row=0; row<n; row++){
		
		for(int col=0; col<n;col++, dp+=3){
			printf("r%dc%d: %d \t",row,col,*(dp));
			
		}
		printf("\n");
	}

				


}
