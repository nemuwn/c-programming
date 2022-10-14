#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
char fname[20], lname[20], id[10];
float gpa;
};

int main(){
	int i=0;
	FILE *fptr;
	char s[256];
	fptr=fopen("students.txt","r");
	while (!feof(fptr)) {
		fscanf(fptr, "%s", s);
		for (i = 0; i < strlen(s); i++){
			printf("%c", s[i]);
			}
			printf("\n");
		}
		fclose(fptr);
		return 0;
	}

