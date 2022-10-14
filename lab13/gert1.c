#include<stdio.h> 
void find(int a[], int n, int *min, int *max){
	int baga, ih, i; baga = a[0]; ih = a[0]; 
	for(i=1; i<n; i++){
		if(baga > a[i]) 
			baga = a[i];
		if(ih < a[i])
			ih = a[i];
	} 
	*min = baga; 
	*max = ih;
} 
int main(){
	int n, i, a[100], baga, ih; 
	scanf("%d",&n);
	for(i=0; i<n; i++) 
 	scanf("%d",&a[i]); 
 	find(a, n, &baga, &ih); 
 	printf("%d %d",baga,ih); 
} 
