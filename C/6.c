#include <stdio.h>

int main()
{
    int r,c,i,j, matrix[4][4];
    for (i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    printf("The matrix is:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
