#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],j,m,n,p,q,k,i,mul[3][3];
    //input number of rows and columns of first matrix
    scanf("%d",&m);
    //input number of rows and columns of second matrix
    scanf("%d",&n);
    //input elements in first first matrix
    for(i=0; i<m; i++)
        for(j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    //input elements in second first matrix
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    printf("The First matrix is:\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
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
    if(m==n)
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                mul[i][j]=0;
                for(k=0; k<m; k++)
                    mul[i][j]+=a[i][k]*b[k][j];
            }
    printf("The multiplication of two matrix is:\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}
