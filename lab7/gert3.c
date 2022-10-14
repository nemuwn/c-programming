#include <stdio.h>

int main(){
     int i,j,a[10][10],b[10][10],c[10][10],n,m,k,d,s;
	 
	 //Ehnii matrits
     printf("toogoo oruulna uu: ");
     scanf("%d%d", &n,&m); 
	 printf("Husngetiin elementuude oruulna uu:\n");
       for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
	           printf("[%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }  
	 printf("Husnegt :\n");
	 for(i = 0; i < n; i++)
	 {
	   for(j = 0; j < m; j++)
	     printf("%2d",a[i][j]);
	    printf("\n");
	 }
	 
	 
	  //Daraagiin matrits
	 printf("toogoo oruulna uu: ");
     scanf("%d%d", &m,&k); 
	 printf("2dh Husngetiin elementuude oruulna uu:\n");
       for(i=0;i<m;i++)
        {
            for(j = 0; j < k; j++)
            {
	           printf("[%d],[%d] : ",i,j);
	           scanf("%d",&b[i][j]);
            }
        }  
	 printf("Husnegt :\n");
	 for(i = 0; i < m; i++)
	 {
	   for(j = 0; j < k ;j++)
	     printf("%2d",b[i][j]);
	    printf("\n");
	 }
	 
	 
	 //2 matritsiig urjuuleh
	for ( i = 0 ; i < n ; i++ )
    {
      for ( j = 0 ; j < k ; j++ )
      {
        for ( d = 0 ; d < m ; d++ )
        {
          s = s + a[i][d]*b[d][j];
           }
 
        c[i][j] = s;
        s = 0;
      }
    }
    
    printf("urjsen matrits:-\n");
 
    for ( i = 0 ; i < n ; i++ )
    {
      for ( j = 0 ; j < k ; j++ )
        printf("%d\t", c[i][j]);
 
      printf("\n");
    }

 
  return 0;
}



