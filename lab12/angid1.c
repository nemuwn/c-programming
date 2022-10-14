#include<stdio.h>
typedef struct {
int d, m, y;
} Date ;
Date read () ;
void print ( Date dt);
int less ( Date a, Date b);

int main(){
	int i;
	Date a[i];
	for(i=0; i<2; i++){
		a[i]=read();
	}
	i=0;
	while(i<2){
		printf("%d/%d/%d", a[i].y, a[i].m, a[i].d);
		printf("\n");
		i++;
	}
	Date y, m, d;
	int x=less(y, m, d);
	if (x==1){
	
	printf("1");
}
	else{
	 printf("0");
	 }
	return 0;
}
Date read(){
	Date d;
	printf("date oruulna uu: \n");
	printf("dd: ");
	scanf("%d", &d.d);
	printf("mm: ");
	scanf("%d", &d.m);
	printf("yy: ");
	scanf("%d", &d.y);
	return d;
}
int less(Date a, Date b){
	if(a.d == b.d && a.m == b.m && a.y == b.y )
	return 0;
	else if(a.y < b.y || a.y == b.y && a.m < b.m || a.y == b.y && a.m == b.m && a.d < b.d)
	return 1;
	else return 0;
	
	}
