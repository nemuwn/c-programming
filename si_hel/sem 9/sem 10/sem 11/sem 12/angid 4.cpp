#include<stdio.h>
void swap (int *a, int *b){
	int d;
	d=*a;
	*a=*b;
	*b=d;
}
int main (){
int x = 1 , y = 2;
swap (&x, &y) ;
printf ("%d %d\n", x, y) ;
return 0;
}	
