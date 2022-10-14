#include<stdio.h>
int main(){
	int a,too1, too2, too3, too4;
	printf("Toogoo oruulna uu: ");
	scanf("%d", &a);
	too1 = a%10;
	a /= 10;
	too2 = a%10;
	a /= 10;
	too3 =a%10;
	a /= 10;
	too4 = a%10;
	(too1==too4 && too2==too3) ? printf("1") : printf("0");
}
