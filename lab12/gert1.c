#include<stdio.h>
typedef struct date{
int d, m, y;
} Date ;
Date read () ;
int zuruu( Date a, Date b);

int main(){
	Date a, b;
	a=read();
	b=read();
	printf("Naadam bolohod %d honog uldsen baina", zuruu(a,b));
	return 0;
}
int zuruu(Date a, Date b){
	int result, days1, days2;
	days1= 1461 * a.y / 4 + 153 * a.m / 5 + a.d;
	days2= 1461 * b.y / 4 + 153 * b.m / 5 + b.d;
	result = days2 - days1;
	return result;
}
Date read(){
	Date d;
	printf("udur sar onoo oruulna uu:\n");
	printf("dd: ");
	scanf("%d", &d.d);
	printf("mm: ");
	scanf("%d", &d.m);
	printf("yy: ");
	scanf("%d", &d.y);
	
	return d;
}
