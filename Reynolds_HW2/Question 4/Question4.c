#include <stdio.h>
#include <string.h>

main(){
	char word[50], *strP, key;
	int cons, vow, spec;
	printf("Enter a String (max 50 chars): ");
	scanf("%s", word);
	

	strP=&(word[0]);
	
	spec=-1; //end character is 0
	for(key=*(strP); key!='\0';strP++){
		key=*strP;
		if(key=='a' || key=='e' || key=='i' || key=='o' || key=='u')
			vow++;
		else if(key<='z' && key>='a')
			cons++;

		else
			spec++;
	}
	printf("Number of vowels: %d\nNumber of consonants: %d \n"
	"Number of digits and special characters: %d",vow,cons,spec);
	
	

		
	

	
}
