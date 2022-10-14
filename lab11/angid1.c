#include<stdio.h>
#include<math.h>
// 2 gurvaljni talbaig Geroni tomiyogoor olj ali tom gurvaljniig oloh//
struct Triangle{
	float a ,b ,c;
}z, x; 
int main(){
	float p1,p2,s1,s2;
	printf("1deh gurwaljnii a, b, c tal: \n");
	scanf("%f %f %f", &z.a,  &z.b,  &z.c);
	printf("2 doh gurwaljnii a, b, c tal: \n");
	scanf("%f %f %f", &x.a,  &x.b,  &x.c);
   	
    p1=(z.a+z.b+z.c)/2;
    p2=(x.a+x.b+x.c)/2;
    s1=sqrt((double)(p1*(p1-z.a)*(p1-z.b)*(p1-z.c)));
    s2=sqrt((double)(p2*(p2-x.a)*(p2-x.b)*(p2-x.c)));
   	
   	if(s2 < s1){
   	printf("ehnii gurwaljin tom\n");
   	printf("%f", s1);
   	}
   	else{
   	printf("2-dh gurwaljin tom\n");
   	printf("%f", s2);
   	}
   	return 0;
}
