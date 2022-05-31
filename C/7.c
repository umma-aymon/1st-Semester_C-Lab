#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],j,n,i,sum[3][3];
    //input size of square matrix
    scanf("%d",&n);
    //input elements in first first matrix
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    //input elements in second first matrix
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    printf("The First matrix is:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("The Second matrix is:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            sum[i][j]=a[i][j]+b[i][j];
    printf("The Addition of two matrix is:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
