#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main() {
	double  a, b, l, d, f;
	float cos1, g, c;
	
	printf("too hevlene uu: \n");
	scanf("%lf%lf%lf", &a,&b,&l);
	
	d = b * b + a * a;
	f =  2 * a * b;
	l = (l * PI) / 180;
	cos1 = cos(l);
	g = d  - f * cos1;
	c = sqrt(g);
	
	printf("Hariu n: %.2lf", c);
	return 0;
}
	 
	
	
	 
	 
	 
