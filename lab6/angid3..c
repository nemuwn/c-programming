#include <stdio.h>

int main()
{
    int i, j, d, m, n,k;
    int matrix[10][10][10];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    printf("Enter number of columns : ");
    scanf("%d", &k);

    /* Input data in matrix */
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
        	 for (d = 0; d < k; d++){
            printf("Enter data in [%d][%d][%d]: ", i, j, d);
            scanf("%d", &matrix[i][j][d]);
        }
        }
    }

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
        	for (d = 0; d < k; d++)
            {
            	
            printf("%d\t", matrix[i][j][k]);
        }
        }
        printf("\n");
    }

    return 0;
}
