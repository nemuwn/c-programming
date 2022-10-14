#include<stdio.h>
#include<math.h>
int min5(int,int,int);
int main(){
	int x,y,z;
	printf("3 toogoo oruulna:");
	scanf("%d%d%d",&x,&y,&z);
	printf("hamgiin baga ni:");
	printf("%d\n",min5(x,y,z));
	return 0;
}
int min5(int a, int b, int c){
	if(a<b){
	if(a<c){
	return a;
	}
	else{
	return c;
	}
		
	}
	else{if(b<c){
			return b;
	}
	else{
		return c;
	}

	}
}
