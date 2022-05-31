#include<stdio.h>
int main()
{
    double i,c;
    printf("Enter a length in centimeter: ");
    scanf("%lf",&c); // 10
    i=c/2.54;
    printf("Length in inch=%lf",i); // 3.937
}
