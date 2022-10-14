#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char zai=' ';
	printf("oguulberee oruulna uu:");
	gets(s);
	int ug=0;
	for(int i=0; i<strlen(s); i++){
		if (s[i]==zai && s[i+1]!=zai)
		ug++;
		
	}
			
	
	printf("%d ug baina", ug);

}
