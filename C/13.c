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
    for(i=0; i<n; i++)
    {
        rsum[i]=0;
        for(j=0; j<n; j++)
            rsum[i]=rsum[i]+a[i][j];
    }
    for(i=0; i<n; i++)
    {
        csum[i]=0;
        for(j=0; j<n; j++)
            csum[i]=csum[i]+a[j][i];
    }
    printf("The sum of rows and columns of the matrix is :\n");
    for(i=0; i< n; i++)
    {
        for(j=0; j< n; j++)
            printf("%d ",a[i][j]);
        printf(" %d",rsum[i]);
        printf("\n");
    }
    for(j=0; j<n; j++)
        printf("%d ",csum[j]);
    return 0;
}
