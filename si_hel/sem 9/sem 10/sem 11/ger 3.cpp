
#include <stdio.h>
#include <math.h>
//2gurwaljniii ali tom gurwaljing ol
struct Triangle{
	int a ,b ,c;
}; 
int main(){
	struct Triangle v1, v2;
	int  p ;
	float s, s1;
	printf("1deh gurwaljnii a ,b , c tal:\n");
	scanf("%d %d %d", &v1.a,  &v1.b,  &v1.c);
	printf("2 doh gurwaljnii a ,b , c tal:\n");
	scanf("%d %d %d", &v2.a,  &v2.b,  &v2.c);
   	p = (v1.a + v1.b + v1.c) / 2;
   	s= sqrt (p * (p - v1.a) * (p - v1.b) * (p - v1.c));
   	p = (v2.a + v2.b + v2.c) / 2;
   	s1 = sqrt (p * (p - v2.a) * (p - v2.b) * (p - v2.c));
   if(s1 < s){
   	printf("ehnii gurwaljin tom");
   }
   else{
   	printf("2 doh gurwaljin tom");
   }
   return 0;
}
