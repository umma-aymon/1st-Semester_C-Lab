#include<stdio.h>
int main()
{
    double w,x,y,z,t,a;
    printf("Enter four marks: ");
    scanf("%lf%lf%lf%lf",&w,&x,&y,&z); // 60 70 80 90
    t=w+x+y+z; // 300
    a=t/4; // 75
    printf("Total marks=%lf\nAverage marks=%lf",t,a);
}
