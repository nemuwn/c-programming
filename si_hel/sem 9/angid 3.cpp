#include<stdio.h>
#include<math.h>
void print(int a[], int n);
void read(int a[], int n);
int main(){
	int k,e;
	scanf("%d%d",&k,&e);
	printf("%d\n",read(k,e));
	printf("%d\n",print(k,e));
	return 0;
}
void read(int a[], int n)
{
	int i;
	for(i = 0; i<n; i++)
	scanf("%d", &a[i]);
}
void print(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d",&a[i]);
	}
}
