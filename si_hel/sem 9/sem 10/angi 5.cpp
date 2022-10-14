#include<stdio.h>
#include<math.h>
#include<string.h>

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
				return 0;
			}
			else{
				return 3;
				printf("temdegt oruulna uu");
			}
		
	}
	else{
		return 2;
		printf("tom useggu bn");
	}	
	}

	
	else{
		printf("1"); 
		printf("denduu boginhon bn");
	}
}
}


	
