#include <stdio.h>
int a=50;
int func1(void)
{
	extern int a;
	return a+::a;
}
int main()
{
	int a=60;
	printf("\n a=%d",a);
	printf("\n a=%d", ::a);
	printf("\n example=%d",  func1());
	return 0;
} 
