#include<stdio.h>
    
int main(){
    int i, n;
    float f;
    printf("toogoo oruulna uu: ");
    scanf("%d", &n);
        
    i=0;
	while ((f = (9.0/5.0 * i) + 32) <= n){
        printf("%.1f\n", f);
        i++;
    }
        
    return 0;
}
