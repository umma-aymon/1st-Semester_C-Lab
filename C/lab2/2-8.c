#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter two sides of triangle: ");
    scanf("%lf%lf",&a,&b); // 3, 4
    c=sqrt(a*a+b*b);
    printf("Hypotenuse=%lf",c); // 5
}
