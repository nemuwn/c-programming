#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student{
	char fname[20], lname[20], id[10];
	float gpa;
};
typedef struct Student Student;
void read(Student a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]:\n", i);
		printf("fname = ");
		scanf("%s", a[i].fname);
		printf("lname = ");
		scanf("%s", a[i].lname);
		printf("id = ");
		scanf("%s", a[i].id);
		printf("gpa = ");
		scanf("%.2f", &a[i].gpa);
	}
}
void print(Student a[], int n){
	printf("\n");
	int i;
	for (i = 0; i < n; i++){	
		printf("fname: ");
		puts(a[i].fname);
		printf("lname: ");
		puts(a[i].lname);
		printf("id: ");
		puts(a[i].id);
		printf("gpa: %.1f\n", a[i].gpa);
	}
}
void student_write(Student a[], int n, char fname[]){
	FILE *fptr;
	int i;
	if ((fptr = fopen(fname, "wb")) == NULL){
		printf("Error!");
		exit(1);
	}
	for (i = 0; i < n; i++){
		fwrite(&a[i], sizeof(struct Student), 1, fptr);
	}
}
int student_read(Student a[], char fname[]){
	FILE *fptr;
	if ((fptr = fopen(fname, "rb")) == NULL){
		printf("Error!");
		exit(1);
		}
		printf("%d", sizeof(struct Student));
		fread(a, sizeof(struct Student), 1, fptr);
		return 1;
}
int main(){
	Student a[100], b[100];
	int n, m;
	printf("n = ");
	scanf("%d", &n);
	read(a, n);
	print(a, n);
	student_write(a, n, "info.dat");
	m = student_read(b, "info.dat");
	print(b, m);
	return 0;
}
