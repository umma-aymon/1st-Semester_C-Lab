#include <stdio.h>

int main()
{
    int i,j,n,a[100][100],sum=0;
    //input size of square matrix
    scanf("%d",&n);
    //input elements in first first matrix
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
                sum+=a[i][j];
        }
    printf("The matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Addition of the left Diagonal elements is:%d\n",sum);
    return 0;
}
