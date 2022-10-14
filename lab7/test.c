#include <stdio.h>

int main(){
     int i,j,a[10][10],n,m,s,tegsh;
	 
     printf("toogoo oruulna uu: ");
     scanf("%d%d", &n,&m); 
	 printf("Husngetiin elementuude oruulna uu:\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
	           printf("[%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }  
	printf("Husnegt :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m ;j++)
	    printf("%2d",a[i][j]);
	    printf("\n");
	}
	 
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		}
		if(a[i][j]%2==0)
          tegsh++;
          printf("tegsh toonuud: %d",tegsh);
          	           
    }

	 

}


   
  
  
