#include <stdio.h>
#include <math.h>
int count(int n) 
{ 
    int s = 0; 
    for (int i = 1; i <= n; i++) { 
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
    printf("Total distinct divisors of are : %d", 
           count(n)); 
}
