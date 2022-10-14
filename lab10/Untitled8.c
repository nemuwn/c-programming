#include<stdio.h>
#include<ctype.h>
#include <string.h>

int is_valid(char pwd[]){
	int i, s;
	int count=0;

	if (s>=6){
		for(i= 0; i<s; i++){
			if(isupper(pwd[i])){
				for(i=0; i<strlen(pwd); i++){
					if(isdigit(pwd[i])) 
					count++;
				}
				if(count>=3){
					for(i=0; i<s; i++){
						if(pwd=='?' || pwd=='!' || pwd=='$' || pwd=='@' || pwd=='*' || pwd=='%' || pwd=='#' || pwd=='-' || pwd=='+'){
							return 0;
						}
					}
					return 4;
				} 
				else return 3;
			}
			return 2;
		}
		return 1;
	}
	return 0; 
}
int main(){
	char str[100];
	int i,k;
	printf("password oo oruulna uu: \n");
	gets(str);
	k=is_valid(str);
	printf("%d", k);

}	
	
