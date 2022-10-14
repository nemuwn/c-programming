#include<stdio.h>

int main(){
    int n,i,z=1;
    printf("n = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("A husnegtii %d dahi too\n",(i+1));
        scanf("%llu",&a[i]);
    }
    i=0;
    if(a[i] > a[i+1]){
    for( i = 0 ; i < n - 1 ; i++ )
   {
      if( a[i] < a[i+1] )
      {
         printf("Erembelegdeegu bn");
         z=0;
         break;
      }
   }
       }
       else if(a[i] < a[i+1]){
           for( i = 0 ; i < n - 1 ; i++ )
   {
      if( a[i] > a[i+1] )
      {
         printf("Erembelegdeegu bn");
         z=0;
         break;
      }
   }
       }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    if(z==1){
    if(a[i] > a[i+1]){
        printf("Buuraxaar eremblegdsn bn");
    }
    else{
        printf("Osohoor eremblegdsn bn");
    }
    }
}
