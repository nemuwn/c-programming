#include<stdio.h>
#include<string.h>
#define N 20

int main()
{
  char pass[N];
  int i, x=0, p;
  printf("Enter a password: ");
  scanf("%s", &pass);
  if(strlen(pass)>=7)
  {
     int lower_case_count = 0;
     int upper_case_count = 0;
     int digit_count = 0;
     int special_count = 0;
     p=strlen(pass);
     for (i = 0; i < p; i++) {
          if (pass[i] >= 'a' && pass[i] <= 'z') ++lower_case_count;
          if (pass[i] >= 'A' && pass[i] <= 'Z') ++upper_case_count;
          if (pass[i] >= '0' && pass[i] <= '9') ++digit_count;
          if (pass[i] == '!' || pass[i] =='@' || pass[i] == '#'  ) ++special_count;
     }    
     if (lower_case_count > 0 && upper_case_count > 0 && digit_count > 0  && special_count > 0) {
          printf("\n");
     }
 }  
 else
   printf("Try Again..");
 return 0;
}
