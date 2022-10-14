#include<stdio.h>
int main(){
	int n,t,k,sum,uld; // uld = uldegdel
	sum=0;
	t=0;
	printf("n = ");
	scanf("%d",&n);
	k=n;
	while(k!=0){
		uld = k%10;
		sum = sum + uld;
		k=k/10;
	}
	t=n%100;
	printf("%d\n%d\n",sum,t);
	if(sum%3==0){
		printf("3-t huwaagddag too\n");
	}
	else{
		printf("3-t huwaagddagui too\n");
	}
	if(t%4==0){
		printf("4-t huwaagddag too\n");
	}
	else{
		printf("4-t huwaagddagui too\n");
	}
}
