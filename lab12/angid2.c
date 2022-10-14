#include<stdio.h>
typedef struct {
int d, m, y;
} Date ;
Date read () ;
void print ( Date dt);
int less ( Date a, Date b);

int main(){
	int n;
	
	printf("n=");
	scanf("%d", &n);
	int i;
	Date a[i];
	for(i=0; i<n; i++){
		a[i]=read();
	}
	i=0;
	while(i<n){
		printf("%d/%d/%d", a[i].y, a[i].m, a[i].d);
		printf("\n");
		i++;
	}
	return 0;
}
Date read(){
	Date dt;
	printf("date oruulna uu: \n");
	printf("yy: ");
	scanf("%d", &dt.y);
	printf("mm: ");
	scanf("%d", &dt.m);
	printf("dd: ");
	scanf("%d", &dt.d);
	return dt;
}

