#include <stdio.h>
#include <math.h>

int main() {
	
	double a, b, c, d, f, l, y,g, h;
	
	
	printf("4n too hevlene uu: \n");
	scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
	
	f = (a * a * a) + (b / c);
	l = sqrt((f * f ) + d);
	g = (d * d )- ((a * b)/ c);
	y = l / g;
	h = y * d;
	
	
	printf("Hariu n: %.2lf", h);
	return 0;
}
