#include<stdio.h>
#include<math.h>
int min5(int,int,int,int,int);

int min55(int a, int b, int c, int d, int e){
	int mn;
	mn=min(a, b);
	mn=min(mn, c);
	mn=min(mn, d);
	mn=min(mn, e);
	return mn; 
	}
	
void min5_tests(void)
{
   int a, b, c, d, e, result;

   a = 1;
   b = 4;
   c = 2;
   d = 7;
   e = 6;

   result = min5(a, b, c, d, e);
   checkit_int(result, 1);
}

int main()
{
   min5_tests();

   return 0;
}
