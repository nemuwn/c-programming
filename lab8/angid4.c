#include<stdio.h>
int main(){
	int i;
	char s[]="hello";
	char s2[20]= "MUIS-iinhaan";
	for(i=0; i<6; i++)
		s2[i]=s[i];
	
	printf("%s", s2);
	return 0;
}
