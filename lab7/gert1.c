#include <stdio.h>

int main()
{
     int i,j,a[10][10],n, count, tmp, z;
	 
     printf("toogoo oruulna uu: ");
     scanf("%d", &n); 
	 printf("Husngetiin elementuude oruulna uu :\n");
       for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
	           printf("[%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }  
	 printf("Husnegt :\n");
	 for(i = 0; i < n; i++)
	 {
	   for(j = 0; j < n; j++)
	     printf("%2d",a[i][j]);
	    printf("\n");
	 }

   
  printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            /*printf("%d baganii %d mor dax too = %d\n",i,j,a[j][i]);*/
            if(a[j][i]%2==0){
                count=count+1;
            }
        }
        if(count>tmp){
            tmp=count;
            z=i+1;
        }
        count=0;
    }
    if(tmp==0){
        printf("Tegsh tootoi bagana bxgui bn");
    }
    else{
    printf("Xamgiin ix tegsh tootoi bagana bol %d dugaar bagana",z);
    }
  }
