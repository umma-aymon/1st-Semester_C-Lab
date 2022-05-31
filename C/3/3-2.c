#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float av;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    av=(float)sum/n;
    printf("sum= %d\nav=%.2f\n",sum,av);
    return 0;
}
