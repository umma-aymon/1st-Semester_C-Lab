#include<stdio.h>
int main()
{
    int a,b;
    float q,r;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b); // 10, 2
    q= a/b; // 5
    r=a%b; // 0
    printf("Quotient=%f\nRemainder=%f",q,r);
}
