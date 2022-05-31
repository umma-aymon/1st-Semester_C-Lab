#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f,i;
    scanf("%d",&n); //10
    //printf("%d\n%d\n",f1,f2);
    for(i=2; i<=n; i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%d\n",f); // 1 2 3 5 8 13 21 34 55
    }

    return 0;
}
