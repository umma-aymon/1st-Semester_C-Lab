#include<stdio.h>
int main()
{
    double r,v,a,pi=3.14159;
    printf("Enter the value of radius: ");
    scanf("%lf",&r); // 2
    v=(4*pi*r*r*r)/3; // 33.51
    a=4*pi*r*r; // 50.26
    printf("Volume = %lf\nArea = %lf",v,a);
}
