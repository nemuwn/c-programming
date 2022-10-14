#include<stdio.h>
int main(){
	int y,m,d,yn,mn,dn;
	yn=2019;
	mn=10;
	dn=1;
	printf("On oruulna uu\n");
	scanf("%d",&y);
	printf("Sar oruulna uu\n");
	scanf("%d",&m);
	printf("Odor oruulna uu\n");
	scanf("%d",&d);
	if(y>yn){
		printf("Ireedui bn");
	}
	else if (y<yn){
		printf("Ongorson bn");
	}
	else if (y==yn){
		if(m>mn){
		printf("Ireedui bn");
	}
	else if (m<mn){
		printf("Ongorson bn");
	}
	else if (m==mn){
		if(d>dn){
		printf("Ireedui bn");
	}
	else if (d<dn){
		printf("Ongorson bn");
	}
	else if (d==dn){
		printf("Onoodor bn");
	}
	}
	}
}

