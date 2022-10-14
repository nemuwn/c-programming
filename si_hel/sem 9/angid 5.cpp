#include<stdio.h>
int power(int , int );
int main(){
	
	int n,k;
	scanf("%d%d",&k,&n);
	printf("%d\n", power(k,n));
	scanf("%d%d",&k,&n);
	printf("%d\n",power(k,n));
return 0;
}
int power(int a, int b) {
int i;
int t=1;
for(i=1; i<=b; i++){
t *=a;
}
return t;
}
