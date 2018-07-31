#include <stdio.h>

main(){
	char a[35];
	printf("Enter a String (max length 35): ");
	scanf("%s",a);
	for(int i=0; i<35; i++){
		if((int)a[i]>96 && (int)a[i]<123)
			a[i]=(int)a[i]-32;
		else if((int)a[i]<91 && (int)a[i]>64)
			a[i]=(int)a[i]+32;
	}
	printf("%s \n",a);

}

