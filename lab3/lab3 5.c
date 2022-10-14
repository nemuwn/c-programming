#include <stdio.h>
int main() {
    int a, b, c, min, d, max;
    
    printf("3n too oruulna uu\n");
	scanf("%d %d %d",&a, &b, &c);


    max = a * (a > b && a > c) +
          b * (b > a && b > c) +
          c * (c > a && c > b);
    
    min = a * (a < b && a < c) +
	      b * (b < a && b < c) + 
	      c * (c < a && c < b);
    
    d = a * ( b>a && a>c || c>a && a>b ) +
	    b * ( a>b && b>c || c>b && b>a ) + 
        c * ( a>c && c>b || b>c && c>a );
    
   
    

    printf("%d\n%d\n%d", max, d, min);

}
 
