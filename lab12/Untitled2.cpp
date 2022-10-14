#include<stdio.h>
typedef struct {
 int d, m, y;
}date;
int date_cmp( date a, date b);
void print(date dt);
int main() {
 date a = {7, 3, 2005};
 date b = {24, 10, 2005};
 print(a);
 int cmp = date_cmp(a, b);
 if(cmp == 0)
   printf(" is equal to");
 else if (cmp > 0)
   printf(" is greater i.e. later than ");
 else
   printf(" is smaller i.e. earlier than");
 print(b);
 return 0;
}

int date_cmp( date a, date b) {
 if (a.d == b.d && a.m == b.m && a.y ==b.y)
    return 0;
 else if (a.y > b.y || a.y == b.y && a.m > b.m || 
           a.y == b.y && a.m == b.m && a.d > b.d)
    return 1;
 else return -1;
}

 void print(date dt) {
    printf("%d/%d/%d", dt.d, dt.m, dt.y);
 } 
