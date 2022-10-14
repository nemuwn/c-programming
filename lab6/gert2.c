#include <stdio.h>

void main()
{
     int i,j,k,a[10][10],msum[10],bsum[10],n, dsum=0, dsum1=0, m;

	 

     printf("husnegtiin hmjeeg oruulna uu : ");
     scanf("%d", &n); 
	 printf("husnegtiin elementuudig oruulna uu :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("[%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }  
	 printf("husnegt:\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",a[i][j]);
	    printf("\n");
	 }

     //muriin niilber
     for(i=0;i<n;i++)
     {
	  msum[i]=0;
	  for(j=0;j<n;j++)
	  msum[i]=msum[i]+a[i][j];
     }
 
    // bagangiin niilber
      for(i=0;i<n;i++)
      {
	  bsum[i]=0;
	  for(j=0;j<n;j++)
		bsum[i]=bsum[i]+a[j][i];
      }
      
      
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                dsum=dsum+a[i][j];
            }
        }
    }
        m=n;
        for(i=0;i<n;i++)
	 {
           m=m-1;
	   for(j=0;j<n ;j++)
            {
              if (j==m) 
                {
                  dsum1= dsum1+a[i][j];
                }
            }
        }
 
      printf("niilber ni :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d",a[i][j]);
	   printf("% 8d",msum[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d",bsum[j]);
             }
             printf("\n baruun diagonaliin niilber %d", dsum);
             printf("\n zuun diagonaliin niilber %d", dsum1);
            printf("\n\n"); 
  }
