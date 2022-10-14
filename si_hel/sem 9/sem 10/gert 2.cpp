#include <stdio.h>
#include <string.h>
int check(char u[ ] , char p[ ] ){
	if(strcmp(u,"bat")==0){
		if(strcmp(p,"123456")==0){
			return 1;
		}
	} else return 0;
	if(strcmp(u,"dorj")==0){
		if(strcmp(p,"password")==0){
			return 1;
		}
	}
	else return 0;
		if(strcmp(u,"bold")==0){
		if(strcmp(p,"pass247")==0){
			return 1;
		}
	}
	else return 0;
		if(strcmp(u,"tsetsgee")==0){
		if(strcmp(p,"justinbeaber")==0){
			return 1;
		}
	}
	else return 0;
}
int main(){
	char username[100],password[100];
	gets(username);
	gets(password);
	if(check(username,password)==1)
	printf("zow baina");
	else printf("buruu baina");
}
