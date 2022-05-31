#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n); // 5
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf("%d",i);
        printf("\n");
    }
    return 0;
}
/* 55555
   4444
   333
   22
   1 */
