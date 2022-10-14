#include <stdio.h>
#include <string.h>
int is_valid(char pwd[]) {
if (strlen(pwd) < 6) return 2;
bool upperCheck = false;
char letters[26] =
{'A','B','C','D','E','F','G','H','I','j','K','L','M','N','O','P','Q','R','S','T'
,'U','V','W','X','Y','Z'};
char numbers[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
char symbols[8] = {'?', '!', '$', '*', '(', ')', '-', '+'};
int j, countNum = 0, k, countSymbol = 0, o;
for (int i = 0; i < strlen(pwd); i++) {
for (j = 0; j < 26; j++) {
if (pwd[i] == letters[j]) upperCheck = true;
}
for (k = 0; k < 10; k++) {
if (pwd[i] == numbers[k]) countNum++;
}
for (o = 0; o < 8; o++) {
if (pwd[i] == symbols[o]) countSymbol++;
}
}
if (!upperCheck) return 3;
if (countNum < 3) return 4;
if (!countSymbol > 0) return 5;
return 1;
}
int main() {
char password[100];
printf("nuuts ug: ");
gets(password);
int check = is_valid(password);
printf("\n");
switch (check) {
case 1:
return 0;
case 2:
printf("„T„‚„„ „~„ 6 „q„p„z„~„p.");
break;
case 3:
printf("1 „„„€„} „ƒ„„s „q„p„z„~„p."); ?
break;
case 4:
printf("4„~ „„„€„€ „q„p„z„~„p.");
break;
case 5:
printf("\?, !, $, , *, (, ), -, + „‘„t„p„w „~„„s „~„ „q„p„z„~„p.");
}
}
