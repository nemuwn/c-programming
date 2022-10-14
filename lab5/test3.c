#include <stdio.h>

int main()
{
    int udur, ehlel, i, j;
    udur=31;

    printf(""1-n hed deh udur ehledgiig oruulna uu(davaa=1, myagmar=2, lhagva=3...): ");
    scanf("%d", &ehlel);
    printf("\n");
    printf("______________________\n\n");

    for (i = 1; i < ehlel; i++) {
        printf("   ");
    }
 
    for (j = 1; j <= udur; i++, j++) {
        printf("%3d", j);
        if (i % 7 == 0)
            printf("\n");
    }
    
    
    printf("\n______________________\n");

    return 0;
}
