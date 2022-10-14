#include<stdio.h>
#include<string.h>
struct Student{
	char fname[20] , lname[20] , id[10];
	float golch;
};
void read ( struct Student *s){
	printf("Oyutnii medeellig oruulna uu \n");
		printf("ID : ");
		scanf("%s", &s->id );
		printf("Ner : ");
		scanf("%s", &s->fname );
		printf("Ovog : ");
		scanf("%s", &s->lname );
		printf("Golch : ");
		scanf("%f", &s->golch );
		printf("\n");
		
}
// oyutnii medeelel hewlex funkts
void print ( struct Student s){
		printf(" Id: %s \n", s.id );
		printf(" Ovog: %s \n", s.lname);
   	 	printf(" Ner: %s \n", s.fname);
 		printf(" Golch: %.1f \n\n",  s.golch);

}

void set_fname( struct Student *p, char ner[]){
	strcpy(p->fname, "dorj");
}

void set_lname( struct Student *p, char ovog[]){
	strcpy(p->lname, "bold");
}

void set_id( struct Student *p, char id[]){
	strcpy(p->id, "1324");
}

void set_golch( struct Student *p, float golch){
	p->golch = 3;
}

int main(){
	struct Student bat , t;
	read(& bat);
	print(bat);
	set_fname(&t, " dorj ");
	set_lname(&t, " bold ");
	set_id(&t, " 1324 ");
	set_golch(&t, 3);
	print(t);
	return 0;
}
