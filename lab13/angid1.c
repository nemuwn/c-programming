#include<stdio.h>
int main(){
	int x;
	int *a;
	a = &x;
	*a = 10;
	printf ("%d\n", x);
	return 0;
}

