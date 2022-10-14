#include<stdio.h>  
int palindrome(int);
int main()    {
	int a;
	printf("toogoo ogno uu:");
	scanf("%d",&a);
	printf("%d",palindrome(a));
}
 int palindrome(int n)
 {
   int r, k, s=0;

   r = n;

   while( n!=0 )
   {
       k  = n % 10;
       s = s*10 + k;
       n /= 10;
   }

   if ( s == r ) return 1;

   else return 0;
 }
