#include<stdio.h>
int main(){
    int n,m,i,z,x,t=1;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    int a[1][n*m];
    z = (n*m)/2;
    for(i=0;i<z;i++){
        printf("Negdugeer mornii %d dahi too\n",(i+1));
        scanf("%llu",&a[0][i]);
    }
    for(i=0;i<(n*m-z);i++){
        printf("hoyrdugaar mornii %d dahi too\n",(i+1));
        scanf("%llu",&a[1][i]); 
    }
    printf("x = ");
    scanf("%d",&x);
    for(i=0;i<z;i++){
        if(a[0][i]==x){
            printf("Negdugeer mornii %d deer bn\n",(i+1));
            t=0;
        }
    }
    for(i=0;i<(n*m-z);i++){
        if(a[1][i]==x){
            printf("hoyrdugaar mornii %d deer bn\n",(i+1));
            t=0;
        }
    }
    if(t==1){
        printf("-1");
    }
}
