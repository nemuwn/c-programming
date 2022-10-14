#include <stdio.h>
int main(){
	int a, b,c,d;
	
	printf("Hoyor too oruulna uu\n");
	scanf("%d%d", &a, &b);
	
	c = (a > b) * a + (a <= b) * b;
    d = (a < b) * a + (a >= b) * b;
   
	printf("%d\n", d);
	printf("%d", c);
	return 0;
}
