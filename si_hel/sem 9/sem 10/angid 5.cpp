#include<stdio.h>
#include<math.h>
#include <string.h>
int is_valid(char pwd[])
{
	int i=0;
	int urt=0;
	int temdegt=0;
	int tomuseg=0;
	int too;
	for(int i=0; i<strlen(pwd); i++){
		int asci=pwd[i];
		urt ++;
		if(asci=='?' || asci=='!' || asci=='$' || asci==',' || asci=='*' || asci==')' || asci=='(' || asci=='-', asci=='+'){
			temdegt++;
		}
		if(asci>=65 && asci<=90){
			tomuseg++;
		}
		if(asci>=48 && asci<=57){
			too++;
		}
	}
	if(urt>=6){
			if(tomuseg>=1){
		    if(too>=3){
			if(temdegt>=1){
				return 4;
			}
			else {
				return 3;
			}
	}
    else
		return 2;	
	}
	else
		return 1; 
}
else return 0;
}
int main (){
	char password[10];
	gets(password);
	if(is_valid(password)==4){
		printf("amjilttai");
	}
	if(is_valid(password)==3){
		printf("temdegt nemj oruulna uu");
	}
		if(is_valid(password)==2){
		printf("too ni hurehgui bn");
	}
		if(is_valid(password)==1){
		printf("tom useg bich");
	}
		if(is_valid(password)==0){
		printf("bogino bn");
	}
}

	
