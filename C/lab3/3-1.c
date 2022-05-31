#include<stdio.h>
int main()
{
    int a,b,c,l;
    scanf("%d %d %d",&a,&b,&c);
    l=(a<b)?(a<c?a:c):(b<c?b:c);
    printf("lowest number=%d",l);
}

