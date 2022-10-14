#include<stdio.h>
void read(int a[], int n){
	int i;
	for (i=0; i<n; i++)
	scanf("%d", &a[i]);
}
void print (int a[], int n){
	int i;
	for (i=0; i<n; i++)
	printf(" %d ", a[i]);
}
int find(int a[],int n,int *addr, int *addr1)
{   int even=0,odd=0;
	for (int i=0;i<n;i++){
		if(a[i]%2==0){
		even++;	
		}
		else odd++;
}
*addr=even;
*addr1=odd;
}
int main(){
	int a[10], n=5;
	read(a,n);
	print(a,n);
	printf("\n");
	int x,y;
	find(a,n,&x,&y);
	printf("Tegsh too:%d\n",x);
	printf("Sondgoi too:%d\n",y);
}
