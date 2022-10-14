#include<stdio.h>
#include<stdlib.h>

int *find_divisors(int n){
	int k=0, i;
	for(i=1;i<(n/2)+1;i++){
		if(n%i==0){
			k=k+1;
		}
	}
	int *arr = (int *)malloc((k)*sizeof(int));
	if (arr == NULL) {
    printf(" Sanah oi hursengvi !\n");
    exit(1);
  	}
	arr[0]=k;
	int t=1;
	for(i=1;i<(n/2)+1;i++){
		if(n%i==0){
			arr[t]=i;
			t=t+1;
		}
	}
	return arr;
}

int main() {
	int i;
  	int *a = find_divisors(50);       
  	for(i =1;i<=a[0];i++){
		printf("%d\n",a[i]);
  }
  free(a);
}


