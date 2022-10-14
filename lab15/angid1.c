#include<stdio.h>

main(){
	int s[100];
	int n;
	FILE *f;
	FILE *fp;
	f = fopen("input.txt","r");
	fp = fopen("output.txt","w");
	fscanf(f,"%d %d",&s[0],&s[1]);	
	printf("%d %d\n", s[0], s[1]);
	n=s[0]+s[1];
	fprintf(fp,"%d",n);
	printf("%d",n);
	fclose(f);
	fclose(fp);
	return(0);
}

