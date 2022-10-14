#include<stdio.h>
#include<string.h>
void find (int a[] , int n, int *addr , int *addr1){
	int sondgoi=0;
	int tegsh=0;
	int i;
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			tegsh++;
		}
		else{
			sondgoi++;
		}
		
	}
	*addr=tegsh;
	*addr1=sondgoi;
}
void read(int a[], int n){
	int i;
	for(i = 0; i<n; i++){
		printf("\na[%d] = ", i+1);
		scanf("%d", &a[i]);
 
	}
}


void print(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n",&a[i]);
	}
}

int main (){
int a [100];
read(a, 5);
int x, y;
find (a, 5 , &x, &y) ;
printf ("tegsh toonuudiin too: %d\n", x) ;
printf ("sondgoi toonuudiin too: %d\n", y) ;
return 0;
}

