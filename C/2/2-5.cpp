#include<stdio.h>
int main()
{
    float grade;
    scanf("%f",&grade);
    if(grade>=80&&grade<=100)
        printf("grade A");
    else if(grade>=65&&grade<=79)
        printf("grade B");
    else if(grade>=50&&grade<=64)
        printf("grade C");
    else if(grade>=40&&grade<=49)
        printf("grade D");
    else if(grade>=0&&grade<=39)
        printf("grade F");
    return 0;
}
