#include<stdio.h>
#include<math.h>

struct Triangle{
	float a ,b ,c;
}z, x;
float findArea(float a, float b, float c);

int main(){
	float p1,p2,s1,s2, a,b,c;
	printf("1deh gurwaljnii a, b, c tal: \n");
	scanf("%f %f %f", &z.a,  &z.b,  &z.c);
	printf("2 doh gurwaljnii a, b, c tal: \n");
	scanf("%f %f %f", &x.a,  &x.b,  &x.c);
	float res = findArea(a, b, c);
	printf("test %2.f", res);
	
}
// Main deeree hariu n zugeer garaad baigaa murtluu findArea deer hiiher -1.#INF00 geed baih ym aa 
// Ene yamar uchirtai ym bol oo bagsh aa
float findArea(float a, float b, float c){
	struct Triangle z, x;
	float p1,p2,s1,s2;
	p1=(z.a+z.b+z.c)/2;
    p2=(x.a+x.b+x.c)/2;
    s1=sqrt((p1*(p1-z.a)*(p1-z.b)*(p1-z.c)));
    s2=sqrt((p2*(p2-x.a)*(p2-x.b)*(p2-x.c)));
    
   if(s2 < s1){
   	return s1;
  
   }
   else{
   	return s2;

   }
}
