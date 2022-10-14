#include <stdio.h>
int arr[100];
int prime(int);
int prime_range(int a, int b);

int main(){
	int a,b,i;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	prime_range(a,b);
	for(i=a; i<=b; i++)
	if(arr[i]!=0)
	printf("%d, ", arr[i]);
	return 0;
	
}

int prime_range(int a, int b){
	while(a <= b){
		if(prime(a)){
			arr[a]=a;
		}
		a++;
	}
}
int prime(int num){
	int i;
	for(i=2; i<=num/2; i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
