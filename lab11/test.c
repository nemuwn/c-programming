#include<stdio.h>
#include<string.h>
struct Student {
	char fname[20], lname[20], id[10];
	float golch;
}t;
typedef struct Student Student;
void read_students(Student a[], int n){
	int i;
	printf("Oyutnii medeellig oruulna uu \n");
	for(i = 0; i < n; i++){
		printf("\n%d dh oyutan \n", i+1);
		printf("ID : ");
		scanf("%s", a[i].id);
		printf("Ner : ");
		scanf("%s", a[i].fname);
		printf("Ovog : ");
		scanf("%s", a[i].lname);
		printf("Golch : ");
		scanf("%f", &a[i].golch);
		}
}
void print(Student st){
	printf("ID : %s \n", st.id);
	printf("Ner : %s \n", st.fname);
	printf("Ovog : %s \n", st.lname);
	printf("Golch : %.1f \n", st.golch);
}
void print_students(Student a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\n%d dh oyutan : \n", i+1);
		print(a[i]);
		}
}
int search_by_fname(Student a[], int n, char fname[]){
	int i;
	for(i = 0; i < n; i++){
		if(strcmp(fname, a[i].fname) == 0){
		return i;
		}
		}
		return -1;
}
int search_by_lname(Student a[], int n, char lname[]){
	int i;
	for( i = 0; i < n; i++){
		if(strcmp(lname, a[i].lname) == 0){
		return i;
		}
		}
		return -1;
}
int search_by_id(Student a[], int n, char id[]){
	int i;
	for( i = 0; i < n; i++){
		if(strcmp(id, a[i].id) == 0){
			return i;
		}
	}
	return -1;
}
int search_by_golch(Student a[], int n, float golch){
	int i;
	for(i = 0; i < n; i++){
		if(golch == a[i].golch){
			return i;
			}
		}
	return -1;
}
void sort_by_golch(Student a[], int n){
	int i, j;
	for(i = 0; i < n; i++){
	for(j = 0; j < n-1; j++){
		if(a[j].golch > a[j+1].golch){
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			}
		} 
	}
		for(i=0; i<n; i++)
	        printf("%.1f\n", a[i].golch);	
}
int main(){
	Student a[100];
	int n, cmd, idx;
	printf("Oyutnii too : ");
	scanf("%d", &n);
	read_students(a, n);
	print_students(a, n);
	char fname[20], lname[20], id[20];
	float golch;
	
	while(1){
		printf("1.Nereer haih  2.Ovgoor haih  3.ID-aar haih  4.Golchoor haih  5.Golchoor erembeleh  6.Hevleh  7.Garah \n");
		scanf("%d", &cmd);
		if(cmd == 1){
			printf("Haih ner: ");
			scanf("%s", fname);
			idx = search_by_fname(a, n, fname);
			if(idx == -1)
			printf("Oyutan oldsongui\n");
			else
			print(a[idx]);
		} else if (cmd == 2) {
			printf("Haih ovog: ");
			scanf("%s", lname);
			idx = search_by_lname(a, n, lname);
			if(idx == -1)
			printf("Oyutan oldsongui\n");
			else
			print(a[idx]);
		} else if (cmd == 3) {
			printf("Haih ID: ");
			scanf("%s", id);
			idx = search_by_id(a, n, id);
			if(idx == -1)
			printf("Oyutan oldsongui\n");
			else
			print(a[idx]);
		} else if (cmd == 4) {
						
			printf("Haih golch: ");
			scanf("%f", &golch);
			idx = search_by_golch(a, n, golch);
			if(idx == -1)
			printf("Oyutan oldsongui\n");
			else
			print(a[idx]);
		} else if (cmd == 5)
			sort_by_golch(a, n);
			else if (cmd == 6)
			print_students(a, n);
			else
			break;
			}
			return 0;
}



 
