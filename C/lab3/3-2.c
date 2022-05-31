#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
        printf("equal");
    else if(a==b || b==c || c==a)
        printf("di");
    else
        printf("not");
}
