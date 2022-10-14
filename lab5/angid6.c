#include<stdio.h>
int main(){
    int n, i, sum = 0;

    printf("Too oruulna uu: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i){
        sum += i;
    }

    printf("niilber = %d", sum);
    return 0;
}
