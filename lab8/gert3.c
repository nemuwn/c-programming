#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int f, i, j;
    gets(str1);
    printf("ugee ugnu uu:");
    gets(str2);
    for (f = 0; str2[f] != '\0'; f++);
    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
            j++;
        else j = 0;
    }
    if (j == f)
        printf("%d r bairlald baina", i - j + 1);
    else
        printf("-1");
}
