#include<stdio.h>
int main()
{
    int i,n,sum=0,j=0;
    float av;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+3)
    {
        sum=sum+i;
        j++;
        printf("%d ",i);
    }
    av=(float)sum/j;
    printf("\nsum=%d\nav=%.2f\n",sum,av);
    return 0;
}
