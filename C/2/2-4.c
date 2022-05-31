#include<stdio.h>
int main()
{
    float hours,rate,gross,tax,net;
    scanf("%f%.2f",&hours,&rate);
    gross=hours*rate;
    tax=(gross*5)/100;
    net=gross-tax;
    printf("Gross=%.2f\nNet=%.2f\n",gross,net);
    return 0;
}
