#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[100];
	printf("a temdegt moroo oruulna uu:");
	gets(a);
	printf("b temdegt moroo oruulna uu:");
	gets(b);
   	strcat(a,b);
  	printf("%s",a);

}
