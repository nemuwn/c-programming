#include<stdio.h>
#include<math.h>
int is_even(int);
int main(){
	int n, i;

	printf("toogoo ogno uu:");
	scanf("%d",&n);
	printf("%d\n",is_even(n));
	printf("n hurtelh buh sondgoi toonuud:\n");
	for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
}
int is_even(int n){
	if(n%2==0){
		return 1;
	}
	else{
	
		return 0;
	}
}
