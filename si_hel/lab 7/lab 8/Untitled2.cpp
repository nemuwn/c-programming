#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char zai=' ';
	printf("oguulberee oruulna uu:");
	gets(s);
	int ug=0;
	int useg=0;
	for(int i=0; i<strlen(s); i++){
		if (s[i]==zai && s[i+1]!=zai)
		ug++;
		for(i =0; i<strlen(s); i++){
	
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='i' || s[i]=='I' || s[i]=='i' || s[i]=='I'){
		useg++;
			}
		
	}

}
