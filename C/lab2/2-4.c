#include<stdio.h>
int main()
{
    double f,c;
    printf("Enter the Fahrenheit temperature: ");
    scanf("%f",&f); // 212
    c=5*(f-32)/9;
    printf("%.2fF=%.2fC",f,c); // 100
    return 0;
}
