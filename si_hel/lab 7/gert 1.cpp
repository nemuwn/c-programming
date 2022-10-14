#include <stdio.h>

int main()
{
     int i,j,a[10][10],n;
	 
     printf("toogoo oruulna uu: ");
     scanf("%d", &n); 
	 printf("Husngetiin elementuude oruulna uu :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("[%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }  
	 printf("Husnegt :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("%2d",a[i][j]);
	    printf("\n");
	 }

   
  
  }
