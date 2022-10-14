#include<stdio.h>

main(){
	int n;
	FILE *f;
	f=fopen("input2.txt","r");
	fscanf(f,"%d",&n);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
		fscanf(f,"%d %d",&a[i],&a[i+1]);
		i=i+1;
	}
	int s=0;
	for(i=0;i<n;i++){
		s=s+a[i];
	}
	fclose(f);
	printf("%d",s);
}

