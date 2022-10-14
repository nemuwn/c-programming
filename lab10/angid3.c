#include<stdio.h>
void count(int n, int a[], int *x);
int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	int x = 0;
	int i;
	count(n, a, &x);
	for(i=0; i < x; i++)
	printf("%d\n", a[i]);
	printf("niit %d\n", x);
	return 0;
}

void count(int n, int a[], int *x){
	int i;
	for(i=1; i <= n; i++){
		if(n%i==0)
		a[(*x)++]=i;
	}
}
