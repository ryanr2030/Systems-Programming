#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>


int main(int argc, char *argv[])
{
	char * str;
	char	path[512];
	int	i;
	struct stat statBuf;

	if (argc != 2) {
        printf ("usage: %s <path>\n", (argv[0]));
        exit (1);
    	}
	
	str=argv[1];
	
	if (stat (str, &statBuf) == -1) {
		for (i = 0; i <= strlen(str); i++)

			if (str[i] == '/' || str[i] == '\0') {
				strncpy(pathname, str, i);
				pathname[i] = '\0';
				if(mkdir(path, S_IRWXU))
					printf("%s exists\n", path);
				else
					printf("%s created\n", path);

			}
		return 0;
	}
	else {
		for (i = 0; i <= strlen(str); i++){
			if (str[i] == '/' || str[i] == '\0') {
				strncpy(path, str, i);
				pathname[i] = '\0';
				printf("%s exists\n",path);
			
			}
		}
	}
}

