#include<stdio.h>
 
int main()
{
	int a, b, v;
 
  	printf("\n Gurvaljnii taluudiin urtiig oruulna uu : ");
  	scanf("%d%d%d", &a, &b, &c);
  	
  	if(a == b && b == c)
  	{
  		printf("\n Zuv gurvaljin baina");
 	}
 	else if(a == b || b == c || a == c)
 	{
 		printf("\n Adil hajuut gurvaljin baina");
	}
	else
	{
		printf("\n Eldev talt gurvaljin baina ");
	}  
 	return 0;
 }
