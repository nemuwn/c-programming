#include<stdio.h>
#include<string.h>
int main(){
	int f=0;
	int i;
	char s[100];
	gets(s);
	for(i =0; i<strlen(s); i++)
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='i' || s[i]=='I' || s[i]=='i' || s[i]=='I'){
		f++;
					
			}
	printf("iim egshigtei %d",f);
			
}
