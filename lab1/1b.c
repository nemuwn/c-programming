#include <stdio.h>
#include <math.h>

int main() {
	
	double a, b, c, D, x1, x2;
	
	printf("coefficientuudiig oruulna uu: \n");
	scanf("%lf%lf%lf", &a,&b,&c);
	
	D = b*b - 4*a*c;
	
	if (D>0){
		x1 = (-b + sqrt(D)) / (2*a);
		x2 = (-b - sqrt(D)) / (2*a);
		printf("x1 = %.2lf, x2 = %.2lf", x1,x2);
	}
	
	else if (D==0){
		
		x1 = x2 = -b / (2 * a);
		printf("x1 = %.2lf, x2 = %.2lf", x1,x1);	
	}
	
	return 0;
}
