# include <stdio.h>
int main ()
{
	int a, b, c, d, f, g, h,j;
	scanf ("%d%d", &a, &b) ;
	c = a > b;
	d = a < b;
	f = a <= b;
	g = a >= b;
	h = a != b;
	j = a == b;
	printf ("%d\n%d\n%d\n%d\n%d\n%d\n", c,d,f, g,h,j) ;
}

