#include<stdio.h>
    
    int main(){
        int i, n;
        float f;
        printf("toogoo oruulna uu: ");
        scanf("%d", &n);
        
        while (1){
        f = (9.0/5.0 * i) + 32;
        if(f>n)                   // Move condition to after calculation
        printf("%.1f\n", f);
        i++;
    }
        
        return 0;
    }
