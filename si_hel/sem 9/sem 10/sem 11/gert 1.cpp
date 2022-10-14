#include<stdio.h>
struct Date {
	int d, m, y;
};
int Day_Diff( Date a, Date b){
	int s=0, i;
	if(a.y<b.y)
		s=s+(b.y-a.y)*365;
	if(a.m<b.m){
		for(i=a.m; i<b.m; i++){
		if(i==4||i==6||i==9||i==11)
		s=s+30;
		else if(i==2)
		s=s+28;
		else
		s=s+31;
		}
	}
	else if(a.m>b.m){
		for(i=b.m; i<a.m; i++){
			if(i==4||i==6||i==9||i==11)
				s=s-30;
			else if(i==2)
				s=s-28;
			else
				s=s-31;
		}
	}
	s=s+(b.d-a.d);
return s;
}
Date read(){
	Date a;
	scanf("%d%d%d", &a.d, &a.m, &a.y);
	return(a);
}
int main(){
	Date a, b;
	printf("Baga date ee oruulna uu D/M/Y:");
	
	a=read();
	printf("2 doh date ee oruulna uu D/M/Y:");
	b=read();
	printf("%d odriin zoruutei", Day_Diff(a,b));
	return 0;
}
