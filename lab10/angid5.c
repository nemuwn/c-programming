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

	for(i=0; i<strlen(pwd); i++){
		urt ++;
		if(pwd[i] >= 'A' && pwd[i] <= 'Z'){
			tomuseg++;
		}
		if(pwd[i] >= '0' && pwd[i] <= '9'){
			too++;
		}
		if (pwd=='?' || pwd=='!' || pwd=='$' || pwd=='@' || pwd=='*' || pwd=='%' || pwd=='#' || pwd=='-' || pwd=='+'){
		temdegt++;
		
		}
	}
	if(urt>=6){
			if(tomuseg>=1){
		    if(too>=3){
			if(temdegt>0){
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

	
