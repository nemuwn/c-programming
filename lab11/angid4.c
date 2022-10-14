#include <stdio.h>
struct Rational{
int d, n;
};
typedef struct Rational Rational;
void print(Rational a){
	printf("\n %d / %d \n", a.d, a.n);
}
Rational simplify(Rational a){
	int d, i;
	for (i = 1; i <= a.n && i <= a.d; i++) {
	if (a.n % i == 0 && a.d % i == 0){
		d = i;
		}
	}
	a.d = a.d / d;
	a.n = a.n / d;
	return a;
}
Rational add(Rational a, Rational b) {
	Rational rational;
	int d, y;
	d = (a.d * b.n) + (a.n * b.d);
	y = a.n * b.n;
	rational.d = d;
	rational.n = y;
	return simplify(rational);
}
Rational sub(Rational a, Rational b){
	Rational rational;
	int d, y;
	d = (a.d * b.n) - (a.n * b.d);
	y = a.n * b.n;
	rational.d = d;
	rational.n = y;
	return simplify(rational);
}
Rational mult(Rational a, Rational b){
	Rational rational;
	rational.d = a.d * b.d;
	rational.n = a.n * b.n;
	return simplify(rational);
}
Rational div(Rational a, Rational b) {
	Rational rational;
	rational.d = a.d * b.n;
	rational.n = a.n * b.d;
	return simplify(rational);
}
int main() {
	Rational rA, rB;
	printf("A: \n");
	printf("d = ");
	scanf("%d", &rA.d);
	printf("n = ");
	scanf("%d", &rA.n);
	printf("B: \n");
	printf("d = ");
	scanf("%d", &rB.d);
	printf("n = ");
	scanf("%d", &rB.n);
	print(add(rA, rB));
	print(sub(rA, rB));
	print(mult(rA, rB));
	print(div(rA, rB));
}

