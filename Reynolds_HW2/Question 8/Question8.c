#include <stdio.h>
main()
{
   int *a,i,j,tmp,n;
	   
   
   printf("\nLength of the Array: ");
   scanf("%d",&n);
   
   printf("Enter %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf("element %d: ",i+1);
	  scanf("%d",a+i);
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\nSorted array: \n");
   for(i=0;i<n;i++)
      {
	  printf("%d ",*(a+i));
	  }         
printf("\n");
}
