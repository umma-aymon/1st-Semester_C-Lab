#include<stdio.h>
#include<string.h>
int main()
{
    float unit,taka,charge,unit1;
    char a[100];
    gets (a);
    scanf("%f",&unit);
    unit1=unit;
    if(unit<=100)
    {
        charge=unit*1.75;
        unit=unit-unit;
    }
    else
    {
        charge=100*1.75;
        unit=unit-100;
    }
    if(unit<=200)
    {
        charge=charge+unit*2.25;
        unit=unit-unit;
    }
    else
    {
        charge=charge+200*2.25;
        unit=unit-200;
    }
        charge=charge+unit*3.50;
        if(charge<100)
            charge=100;
        if(charge>1000)
            charge=charge+charge*.15;
    printf("user name=%s\n units=%f charge=%f",a,unit1,charge);
    return 0;
}
