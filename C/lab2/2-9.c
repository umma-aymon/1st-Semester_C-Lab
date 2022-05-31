#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z;
    printf("Enter th value of x: ");
    scanf("%lf",&x); // 5
    z=(x-1)/x;
    y=z+(pow(z,2))/2+(pow(z,3))/3+(pow(z,4))/4;
    printf("y=%lf",y); // 1.393066667
}
