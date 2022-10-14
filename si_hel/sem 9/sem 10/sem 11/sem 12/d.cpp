#include <stdio.h>
int main (){
	int a[20][20];
	int n,i,j,s=0;
	scanf("%d", &n);
	for (i=0; i<n; i++){
		for(j=0; j<n;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0; i<n; i++){
		for(j=0; j<n;j++){
			if(i==j)
			s=s+a[i][j];
		}
	}
		printf(" diagnoli %d:", s);
		return 0;
		
}

