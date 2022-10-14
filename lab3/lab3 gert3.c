#include <stdio.h>
int main() {
	float dun; 
	int huvi;
	
	printf("Dungee oruulna u: ");
	scanf("%f", &dun);
	
	huvi = (dun * 100 )/ 35;
	printf("%d", huvi);	

	(huvi>=95) && printf("A");
	(huvi>=85 && huvi<=94) && printf("B");
	(huvi>=75 && huvi<=84) && printf("C");
	(huvi>=65 && huvi<=74) && printf("D");
	(huvi>=0 && huvi<=64) && printf("F");
	

	return 0;
}
