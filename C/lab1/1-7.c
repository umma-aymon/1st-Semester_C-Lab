#include<stdio.h>
int main()
{
    double a,b,c,mul;
    printf("Enter three double numbers: ");
    scanf("%lf%lf%lf",&a,&b,&c); //20.125, 15.659, 5.16532
    mul=a*b*c;
    printf("Multiplication=%lf",mul); //1627.785386
}
