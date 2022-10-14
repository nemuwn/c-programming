#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int n;
	int d;
}Rational;

int gcd(int n, int d){
	int result;
	while(d!=0){
		result = n % d;
		n = d;
		d = result;
	}
	return n;
}

int lcm(int a, int b){
	return (a/gcd(a,b)) * b;
}

Rational simplify(Rational a){
	int cd;
	cd = gcd(a.n, a.d);
	a.n /= cd;
	a.d /= cd;
	return a;
}

Rational add(const Rational a, const Rational b){
	Rational sum;
	int lcmd;
	a = simplify(a);
	b = simplify(b);
	lcmd = lcm(a.d, b.d);
	sum.n = (lcmd / a.d * a.n) + (lcmd / b.d * b.n);
	sum.d = lcmd;
	return simplify(sum);
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

Rational sub( const Rational a, const Rational b){
	Rational sum;
	int lcmd;
	a = simplify(a);
	b = simplify(b);
	lcmd = lcmd(a.d, b.d);
	sum.n = (lcmd / a.d * a.n) - (lcmd / b.d * b.n);
	sum.d = lcmd;
	return simplify(sum);
}

Rational mult(const Rational *a, const Rational *b){
	Rational c;
	c.n = a->n * b->n;
	c.d = a->d * b->d;
	return c;
}


Rational div(const Rational *a, const Rational *b){
	Rational c;
	c.n = a->n * b->d;
	c.d = a->d * b->n;
	return c;
}


void read ( Rational *a){
	printf("butarhai too oruulna uu (n/d): ");
	scanf("%d/%d", &a->n, &a->d);
}

int main(){
	int a, b;
	Rational n1, n2, res;
	read(&f1);
	read(&f2);
	
	printf("%d/%d huraaval", n1.n, n1.d);
	n1 = simplify(n1);
	printf("%d/%d\n", n1.n, n1.d);
	
	printf("%d/%d huraaval", n2.n, n2.d);
	n2 = simplify(n2);
	printf("%d/%d\n", n2.n, n2.d);
	
	res = add(n1, n2);
	printf("%d/%d + %d/%d = %d/%d \n", n1.n, n1.d, n2.n, n2.d, res.n, res.d);
	
	res = sub(n1, n2);
	printf("%d/%d - %d/%d = %d/%d \n", n1.n, n1.d, n2.n, n2.d, res.n, res.d);
	
	res = mult(n1, n2);
	printf("%d/%d * %d/%d = %d/%d \n", n1.n, n1.d, n2.n, n2.d, res.n, res.d);
	
	res = div(n1, n2);
	printf("%d/%d / %d/%d = %d/%d \n", n1.n, n1.d, n2.n, n2.d, res.n, res.d);
}

