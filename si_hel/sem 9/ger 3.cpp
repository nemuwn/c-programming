#include <stdio.h>
void read (int A[] , int n){
	int i;
	for (i=0; i<n; i++)
	scanf("%d", &A[i]);
}
void print (int A[] , int n){
	int i;
	for (i=0; i<n; i++)
	printf(" %d ", A[i]);
}
int join (int A[] , int B[] , int n, int m,int k)
 {
	for (n=0;n<m+n; n++)
		A[n]=B[m];
}
int main ()
{
int a[100] , b[100] , n, m;
scanf ("%d", &n) ;
read (a, n) ;
print (a, n) ;
scanf ("%d", &m) ;
read (b, m) ;
print (b, m) ;
int k = join (a, b, n, m,n+m) ;
print (a, k) ;
}


