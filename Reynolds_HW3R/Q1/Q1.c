#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc, char *argv[])
{
FILE *fpt;
int j, count=0;
char word[80], key[80];

if(argc !=2)
{
    printf("key[filename]\n");
    exit(0);
}
if((fpt=fopen(argv[1],"r")) == NULL)
{
    printf("unable to open %s for reading\n",argv[1]);
    exit(0);
}
printf("key to search for:");
scanf("%s",key);

while (fscanf (fpt,"%s",word) == 1)
{
	int i, j=0, k;
	  for(i=0; word[i]; i++)
	  {
	    if(word[i] == key[j])
	    {
	      for(k=i, j=0; word[k] && key[j]; j++, k++)
		if(word[k]!=key[j])
		    break;
	       if(!key[j]){
		count++;
		printf("\nKey:%s found in word:%s",key, word);
		printf("\n%i found so far Key(s):%s\n", count, key);
		
		}
	    }
	  }

}
}
