#include<stdio.h>
int digit_sum (int a){
	int c, b, d, sum=0;
	while (a>0){
	b=a%10;
	a=a/10;
	sum=sum+b;
	}
	return sum;
}
int main(){
	int n,i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i % digit_sum(i) ==0)
		printf ("%d\n", i);
	}
}

