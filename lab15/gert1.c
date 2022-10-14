#include<stdio.h>
#include<stdlib.h>

int *get_array_from_file(char fname[]){
	int *arr = (int *)malloc(256*sizeof(int));
	int i=0;
	while(!stderr){
		arr[i]=fname[i];
		i=i+1;
	}
	return arr;
}

main(){
	char a[100];
	FILE *f;
	f=fopen("fname.txt","r");
	int *b;
	int i=0;
	while(!stderr){
		fscanf(f,"%c",a);
		b[i] = *get_array_from_file(a);
		i=i+1;
	}
		
	while(!stderr){
		printf("%d\n",b[i]);
		i=i+1;
	}
	
}
