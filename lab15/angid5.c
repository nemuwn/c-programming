#include<stdio.h>

struct Student{
	char fname[20];
	char lname[20],id[10];
	float gpa;
};

main(){
	int n, i;
	puts("Xeden student = ");
	scanf("%d",&n);
	struct Student s[n];
	for(i =0;i<n;i++){
		puts("First name = ");
		gets(s[i].fname);
		gets(s[i].fname);
		puts("Last name = ");
		gets(s[i].lname);
		puts("ID = ");
		gets(s[i].id);
		puts("GPA = ");
		scanf("%f",&s[i].gpa);
	}
	for(i=0;i<n;i++){
		puts(s[i].fname);
		puts(s[i].lname);
		puts(s[i].id);
		printf("%.2f",s[i].gpa);
		printf("\n");
	}
	FILE *f;
	f= fopen("students.txt","w");
	for(i=0;i<n;i++){
		fprintf(f,"%s",s[i].fname);
		fprintf(f,"%s","\n");
		fprintf(f,"%s",s[i].lname);
		fprintf(f,"%s","\n");
		fprintf(f,"%s",s[i].id);
		fprintf(f,"%s","\n");
		fprintf(f,"%.2f",s[i].gpa);
		fprintf(f,"%s","\n");
		fprintf(f,"%s","\n");
	}
	

}
