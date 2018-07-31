#include <stdio.h>
#include <string.h>
main(){
	char name[50];
	char first[25];
	char last[25];
	printf("What is your name?");
	scanf("%s",name);
	
	int i;
	int j;
	i=1;
	first[0]=name[0];
	while(name[i]<='z' && name[i]>='a')
	{
		first[i]=name[i];
		i++;
	}
	first[i]=0;
	j=i;
	i=1;
	last[0]=name[j];
	j++;
	while(name[j]<='z' && name[j]>='a')
	{
		last[i]=name[j];
		i++;
		j++;
	}
	last[i]=0;
	printf("First Name: %s Last Name: %s \nFull Name: %s \n", first, last, name);

}
