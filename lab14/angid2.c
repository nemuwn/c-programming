#include<stdio.h>
int size(int *begin , int *end);
int main(){
	int i, n;
	scanf ("%d", &n) ;
	int a[n];
	printf ("%d\n", size (a, a + n) ) ; 
	return 0;
}
int size(int *begin , int *end){
	int s[end-begin];
	return sizeof(s);
	
}
