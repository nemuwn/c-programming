#include<stdio.h>
void read(int a[], int b[], int n, int m){
	int i;
	printf("A husnegtiin 5 elemtuudiig oruulna uu\n");
	for(i=0; i<n; i++)
	scanf ("%d", &a[i]);
	printf("B husnegtiin 3 elemtuudiig oruulna uu\n");
	for(i=0; i<m; i++)
	scanf ("%d", &b[i]);
}

void print(int a[], int b[], int n, int m){
	int i;
    printf("A:");
	for(i=0; i<n; i++)
	printf("%d",&a[i]);

	printf("B:");
	for(i=0; i<m; i++)
	printf("%d",&b[i]);
}

int main(){
	int a[5], n=5;
	int b[3], m=3;
	read(a, n, b, m);
	print(a, n, b, m);
	return 0;
}


