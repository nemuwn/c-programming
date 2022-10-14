#include<stdio.h>
#include<string.h>
void find (int a[] , int n, int *min , int *max){
	int i; 
	for(i=0; i<n;i++){
		if(a[i]>*max){
			*max=a[i];
		}
		
	}
	for(i=0; i<n; i++){
		if(a[i]<*min){
			*min=a[i];
		}
	}
	
}
int main(){
	int a[100],i,x,y;
	printf("10 too oruulna uu:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	find(a, 10, &y, &x);

	printf("hamgiin baga ni:%d\n",y);
	printf("hamgiin ih ni:%d",x);
	
}
