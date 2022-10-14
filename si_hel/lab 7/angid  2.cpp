#include<stdio.h>
int main (){
	int a[100],n,i,s=0,f,count=0;
	printf("huuhdiinhee toog oruulna uu:");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("\n undruu ugnu uu:");
		scanf("%d",&a[i]);
		s =s+a[i];
		
		}
		f=s/n;	
		printf("\n%d dundaj ni",f);
		for(i=1; i<=n; i++){
			if(f<a[i])
			count++;
		}
		printf("\ndundajaas deer undurtui huuhduudin too: \n%d",count);
		return 0;	
}
