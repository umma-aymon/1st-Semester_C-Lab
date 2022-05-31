#include <stdio.h>
int main()
{
    int i,j,n,a[100][100],rsum[100],csum[100];
    //input size of square matrix
    scanf("%d",&n);
    //input elements in first first matrix
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("The matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Upper triangular matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i<=j)
                printf("%d ",a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
