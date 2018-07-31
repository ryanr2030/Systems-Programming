
/* waitdemo1.c - shows how parent pauses until child finishes
 */

#include <stdio.h>
#include <time.h>
int delay(){
	srand(time(NULL));
	int r=rand()%10;
	return r;
}	

main(int argc, char *argv[])
{
	if(argc!=2){
		printf("ERROR: Invalid number of child processes.\n");
		exit(1);
	}
	else{
		int cnumb=atoi(argv[1]);
		int  newpid;
		void child_code(), parent_code();



		printf("before: mypid is %d\n", getpid());
		for(int i=0; i<cnumb;i++){
			newpid=fork();
			if ( newpid == -1 )
				perror("fork");
			else if ( newpid == 0 )
				child_code(delay());
			else
				parent_code(newpid);
		}
	}
}
/*
 * new process takes a nap and then exits
 */
void child_code(int delay)
{
		printf("child %d here. will sleep for %d seconds\n", getpid(), delay);


	sleep(delay);
	printf("child done. about to exit\n");
	exit(17);
}
/*
 * parent waits for child then prints a message
 */
void parent_code(int childpid)
{

	int wait_rv;		/* return value from wait() */
	wait_rv = wait(NULL);
	printf("done waiting for %d. Wait returned: %d\n", childpid, wait_rv);
}
