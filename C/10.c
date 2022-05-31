#include<stdio.h>
int main()
{
    int r,c,i,j,matrix[100][100],transpose[100][100];
    scanf("%d%d",&r,&c);
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&matrix[i][j]);
    printf("The matrix is:\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
    for (i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            transpose[j][i] = matrix[i][j];
    printf("The transpose of a matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
