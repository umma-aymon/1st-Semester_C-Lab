#include<stdio.h>
int main()
{
    float x,y,z,t,av;
    scanf("%f%f%f",&x,&y,&z);
    t=x+y+z;
    av=t/3;
    printf("Total marks= %.2f\naverage= %.2f",t,av);
    return 0;
}
