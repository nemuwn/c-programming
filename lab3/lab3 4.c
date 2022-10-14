#include <stdio.h>
int main(){
	int a, b,c,d, e, f;
	a = 3;
	b = 0;
	c = 2;
	d =3;
	e =0;
	f =2;
	


	a || printf("o") && c;
    c && d || printf("x");
    (d || b) && f || printf("x");
    a + b == 1 && printf("x");
    f && printf("o");
    b && d || printf("o");
    b + d == 3 && printf("o");
	

	return 0;
}
