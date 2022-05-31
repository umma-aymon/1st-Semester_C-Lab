#include<stdio.h>
int main()
{
    float a,b,add,sub,mul,div;

    printf("enter two numbers : ");
    scanf("%f%f",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("add=%f\n sub=%f\n mul=%f\n div=%f\n",add,sub,mul,div);
    printf("checking odd or even\n");
    if((int) a%2==0)
        printf("the number is even");
    else
        printf("the number is odd");
    return 0;
}
