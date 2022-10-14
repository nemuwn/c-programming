#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c,d,s,u,s1, yz;
	float h;

	
	printf("4n too hevlene uu: \n");
	scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
	
	s = a + b;
	u = s * s;
	s1 = u + d;
	yz = sqrt(s1);
	h = yz / (double)c;
	
	printf("hariu n: %.2lf",h);
	return 0;


	
}
