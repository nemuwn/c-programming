#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter value of n: ");
    scanf("%d", &n);
    i=0;

    while(n>=i)
    {
        printf("%d\n", n);
        i--;
    }

    return 0;
}
