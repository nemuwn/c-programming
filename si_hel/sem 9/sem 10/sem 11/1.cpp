#include<stdio.h>
typedef struct{

int d,y,m;
}Date;
Date read(){
	Date d;
	printf("Day:");
	scanf("%d",&d.d);
	printf("\nMonth:");
	scanf("%d",&d.m);
	printf("\nYear:");
	scanf("%d",&d.y);
	return d;
}
int main(){
	Date x=read();
	int a=x.d;
	printf("Day:%d",x.d);
	printf("\nMonth:%d",x.m);
	printf("\nYear:%d",x.y);
}

