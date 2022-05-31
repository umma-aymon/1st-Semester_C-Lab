#include<stdio.h>
int main()
{
    int i=2,n;
    scanf("%d",&n);
    while(i<n)
    {
    if(n%i==0)
        printf("The number is not prime");
    else
        printf("The number is prime");
    }
    return 0;
}
