#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,x1,x2;
    printf("Enter three values: ");
    scanf("%lf%lf%lf",&a,&b,&c); // 1 5 3  // 1 4 4  // 1 3 4
    x=(b*b)-(4*a*c);
    //printf("%lf\n",x);
    if(x>0) // 1 5 3
    {
        x1=(-b+sqrt(x))/(2*a);
        x2=(-b-sqrt(x))/(2*a);
        printf("x1=%lf\nx2=%lf",x1,x2); // -.697, -4.3
    }
    else if(x==0) // 1 4 4
    {
        x1=x2=-b/(2*a);
        printf("x1=x2=%lf",x1); // -2
    }
    else
        printf("Imaginary answer"); // 1 3 4
    return 0;
}

