#include <stdio.h>

int main()
{
    int udur, f, i, j;
    udur=31;

    printf("1-n hed deh udur ehledgiig oruulna uu\n(davaa=1, myagmar=2, lhagva=3, purev=4, baasan=5, byamba=6, nyam=7): ");
    scanf("%d", &f);

    printf("______________________\n\n");

    for (i = 1; i < f; i++) {
        printf("   ");
    	
    
    }
 
    for (j = 1; j <= udur; i++, j++) {
        printf("%3d", j);
        if (i % 7 == 0)
            printf("\n");
            if(i==8)
            printf("!", i);
            if(i==18)
            printf("!", i);
    }
    
    
    printf("\n______________________\n");

    return 0;
}
