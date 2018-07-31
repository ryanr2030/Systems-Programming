#include <stdio.h>
#include <string.h>

main(){
	char word[80];
	int i,j;
	printf("Enter any word: ");
	scanf("%s", word);

	i=0;
	while(word[j]!='\0'){
		if(word[j]>96 && word[j]<123)
			word[j]=word[j]-32;
		j++;
	}
	while(word[i]!='\0'){
		if(word[i]==word[i+1]){
			j=1;
			while(word[i]==word[i+j]){
				j++;}	
			printf("%d consecutive %c\n", j, word[i]);
			i=j+i;
			continue;
		}
		i++;
	}
} 
