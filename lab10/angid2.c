#include <stdio.h>
#include <math.h>
int count(int n) 
{ 
    int s = 0, i; 
    for (i = 1; i <= n; i++) { 
        if (n % i == 0) { 
           s++;
        } 
    } 
    return s; 
} 
int main() 
{ 
    int n;
    scanf("%d", &n);
    printf("%d-n toond huvaagdana", 
           count(n)); 
}
