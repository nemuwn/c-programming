#include <stdio.h>
#include <string.h>
int check(char u[], char p[]) {
	if (strcmp(u, "bat") == 0 && strcmp(p, "123456") == 0) return 1;
	else if (strcmp(u, "dorj") == 0 && strcmp(p, "password")==0) return 1;
	else if (strcmp(u, "bold") == 0 && strcmp(p, "pass247")==0) return 1;
	else if (strcmp(u, "tsetsgee") == 0 && strcmp(p, "justinbeaber")==0) return 1;
	else return 0;
}
int main() {
	char username[20];
	char password[20];
	printf("ner: ");
	scanf("%s", &username);
	printf("pass: ");
	scanf("%s", &password);
	int r = check(username, password);
	if (r == 1) 
	printf("1");
	else printf("0");
}

