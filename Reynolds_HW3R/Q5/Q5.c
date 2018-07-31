#include 	<stdlib.h>
#include        <stdio.h>
#include        <unistd.h>
#include        <utmp.h>
#include        <fcntl.h>
#include        <time.h>


#define SHOWHOST /* include remote machine on output */
void showtime(long);
void show_info(struct utmp *);

int main() {
  struct utmp current_record; /* read info into here */
  int utmpfd;  /* read from this descriptor */
  int reclen = sizeof(current_record);

  if ((utmpfd = open(UTMP_FILE, O_RDONLY)) == -1) {
    perror( UTMP_FILE ); /* UTMP_FILE is in utmp.h */
    exit(1);
  }

  while (read(utmpfd, &current_record, reclen) == reclen) {
    show_info(&current_record);
  }
  close(utmpfd);
  return 0; /* went ok */
}

/*!
 * show info()
 * displays contents of the utmp struct in human readable form
 * *note* these sizes should not be hardwired
 */
void show_info(struct utmp *utbufp) {
   printf("%-8i", utbufp->ut_type); /* Type of Log in*/
  printf(" "); /* a space */	
  printf("%-8i", utbufp->ut_pid); /* Process ID*/
  printf(" "); /* a space */	
  printf("%-8.8s", utbufp->ut_line); /* Devicename*/
  printf(" "); /* a space */	
  printf("%-12.12s", utbufp->ut_id); /* Inittab ID */
  printf(" "); /* a space */
  printf("%-8.8s", utbufp->ut_user); /* USERNAME */
  printf(" "); /* a space */
  printf("%-8.8s", utbufp->ut_name); /* the logname */
  printf(" "); /* a space */
  showtime(utbufp->ut_time);
  printf(" "); /* a space */
#ifdef SHOWHOST
  printf("(%s)", utbufp->ut_host); /* the host */
#endif
  printf("\n"); /* newline */
}

void showtime( long timeval )
/*
 *      displays time in a format fit for human consumption
 *      uses ctime to build a string then picks parts out of it
 *      Note: %12.12s prints a string 12 chars wide and LIMITS
 *      it to 12chars.
 */
{
        char    *cp;                    /* to hold address of time      */

        cp = ctime(&timeval);           /* convert time to string       */
                                        /* string looks like            */
                                        /* Mon Feb  4 00:46:40 EST 1991 */
                                        /* 0123456789012345.            */
        printf("%12.12s", cp+4 );       /* pick 12 chars from pos 4     */
}
