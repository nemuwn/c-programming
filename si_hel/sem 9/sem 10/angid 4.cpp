/*
?????? ??????????? ?????????.
*/
#include <stdio.h>
void read(int a[] , int n)
{
int i ;
for ( i = 0; i < n; i++){

scanf( "%d" , &a[i] ) ;
}
}
void print (int a[] , int n)
{int i ;
for ( i = 0; i < n; i++){

printf( "%d" , a[i] ) ;
printf(  "\n" ) ;
}
}

int modul(int x)
{
	scanf("%d",x);
	if(x>=0){
		return x;
	}
	else {
		return -x;
	}
}

int sum(int a[ ] , int n)
{
	int niilber=0;
	for(int i=0; i<n; i++){
		niilber +=a[i];
		return niilber;
	}
}

int avg(int a[ ] , int n)
{
	int niilber=0;
	int dundaj;
	for(int i=0; i<n; i++){
		niilber+=a[i];
	}
	dundaj=niilber/n;
	return dundaj;
	
}
int product (int a[ ] , int n)
{
	int urjver=0;
	for(int i=0; i<n; i++){
		urjver*=a[i];
	}
}
int main( )
{
int a[100] , n, b[100];
printf ( "n toon i i utg i ig oruul :" ) ;
scanf( "%d, &n") ;
read(a, n) ;
printf ( "Tanii oruulsan daraalal :") ;
print (a, n) ;
int mu, i, urjver;
mu = avg(a, n) ;
printf ( "mu-i i n utga : %d\n " ,mu) ;

for ( i = 0; i < n; i++){

b[ i ] = modul(a[ i ] - mu);
}
for(i=0; i<n; i++)
{
	urjver*=b[i];
}
printf("%d urjver ni",urjver);

int alpha ;
alpha = product (b, n) ;
printf ( "alpha-i i n utga : %d\n”  ",alpha) ;
return 0;
}
