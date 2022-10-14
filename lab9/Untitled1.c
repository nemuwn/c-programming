#include <stdio.h>
int c[100], l;
int prime(int, int);
void digit(int c[], int l);

int main() {
	int a,b,i;
	scanf("%d%d", &a,&b);
	prime(a,b);
	return 0;
	
}

int prime(int n, int k){
	int i,j,s=0,l=0;
	for (i=n; i<k; i++){
		for(j=2; j<i; j++){
			if(i%j==0)
			s++;
			
		}
		if(s==0){
		c[l]=i; 
		l++;
		}
		s=0;
		
		}
		digit(c,l);
		
	}

	void digit(int c[], int l){
		int i;
		for(i=0; i<l; l++)
		printf("$d", c[l]);
	}

