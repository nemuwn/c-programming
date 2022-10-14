#include<stdio.h>
#include<string.h>
struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book1,Book2;
void printBook(struct Books *book);
int main(){
	/* book 1iih*/
	strcpy(Book1.title, "C programming");
	strcpy(Book1.author, "Nuha ALi");
	strcpy(Book1.subject, "C programming tutorial");
	Book1.book_id=15;
	/*book 2iih*/
	strcpy(Book2.title, "Telecom billing");
	strcpy(Book2.author, "Zara ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id=16;
	/*print Book1 address aar hevlene*/	
	printBook(&Book1);
	/*print book2 infog */
	printBook(&Book2);
	return 0;	
}
void printBook(struct Books *book){
	printf("Book title:%s\n", book->title);
	printf("Book author :%s\n",book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book book_id: %d\n", book->book_id);
}

