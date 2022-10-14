#include<stdio.h>
#include<stdlib.h>
int n,i,max;


int main(){
printf("toogoo oruulna uu:");
scanf("%d",&n);	
int a[n];
for(i = 0; i<n; i++)
{
	scanf("%d",&a[i]);
}
max = a[0];
for(i =0; i<n; i++){
	if(max<a[i])
	max=a[i];
}
printf("%d", max);
}

