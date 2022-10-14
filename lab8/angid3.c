#include <stdio.h>
#include <string.h>
int main()
{
   char a[100], b[100];

   printf("ugee oruul");
   gets(a);

   printf("ugee oruul");
   gets(b);

   if (strcmp(a,b) == 0)
      printf("ijil\n");
   else
      printf("ijil bish\n");

   return 0;
}
