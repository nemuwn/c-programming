#include <stdio.h>
int main()
{
    int i,j,a[5][5],m,n,tmp=0, count=0, z;
    printf("toogoo oruulna uu: ");
    scanf("%d%d",&n,&m);
    printf("Husngetiin elementuude oruulna uu:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
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
	 
	 
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){

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
        printf("Tegsh tootoi bagana baihgui bn");
    }
    else{
    printf("hamgiin ih tegsh tootoi bagana bol %d dugaar bagana",z);
    }
}

