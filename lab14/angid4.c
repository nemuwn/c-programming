#include<stdio.h>
int * find (int *begin , int *end , int x);
int main(){
	int a[5] = {3 , 7 , 1 , 2 , 4};
	int *p, x, y, i;
	int j = *p;
	printf (" xaix too: ");
	scanf ("%d", &x) ;
	p = find (a, a + 5 , x);
	if(p == NULL)
	printf("%d too oldsongui \n", x);
	else{
		printf ("%d too %d-r bairlald oldloo \n", x, (p - a)+1);
		printf("solih too:");
		scanf("%d", &y);
		a[j]=y;
		for(i=0; i < 5; i++){
			printf("%d", a[i]);
		}
	}
	return 0;
}
int * find (int *begin , int *end , int x){
	int *i;
	for(i = begin; i < end; i++)
		if(*i == x)
			return i;
	i=NULL;
	return i;
}


