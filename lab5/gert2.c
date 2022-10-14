#include<stdio.h>
int main()
{
    int a, b, i, hieh;
    printf("2 too oruulna uu: ");
    scanf("%d %d", &a, &b);

    for(i=1; i <= a && i <= b; ++i){
    	
        if(a%i==0 && b%i==0)
		hieh = i;
    }
    printf("Hamgiin ih yrunhii huvaagch: %d", hieh);
    return 0;
}
