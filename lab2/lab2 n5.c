#include <stdio.h>
int main(){
	int n1, n2, nemeh, hasah, urjih, mod;
	float huvaah;
	
	printf("Hoyor too oruulna uu\n");
	scanf("%d%d", &n1, &n2);
	
	nemeh = n1 + n2;
	hasah = n1 - n2;
	urjih = n1 * n2;
	huvaah = n1 / (float)n2;
	mod = n1 % n2;
	
	printf("%d\n%d\n%d\n%.2f\n%d",nemeh,hasah, urjih, huvaah,mod);
	return 0;
}
