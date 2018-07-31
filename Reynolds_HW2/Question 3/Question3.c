#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i,j;
	for(i=0; i<argc-1; i++){
		for(j=i+1; j<argc; j++)
			if(strcmp(argv[i],argv[j])==0)
				printf("Positions %d. %d match: %s"	
					"\n",i,j,argv[i]);
	}
}
