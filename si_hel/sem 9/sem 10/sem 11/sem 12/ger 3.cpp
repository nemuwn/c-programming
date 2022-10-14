#include<stdio.h>
#include<string.h>

struct Rational {
int d, n; // d/n butarxai
};
Rational add( const Rational *a, const Rational *b) ;
Rational sub( const Rational *a, const Rational *b) ;
Rational mult ( const Rational *a, const Rational *b) ;
Rational div( const Rational *a, const Rational *b) ;
void simplify ( Rational *a){
	
}
void read ( Rational *a) ; // unshih
void print ( Rational *a) ;
