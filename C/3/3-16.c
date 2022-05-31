#include<stdio.h>
int main()
{
    int a,b,x,r,y;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
    while(x!=0)
    {
        r=y%x;
        y=x;
        x=r;
       // printf("x=%d y=%d r=%d ",x,y,r);
    }
    printf("GCD= %d",y);
    return 0;
}
