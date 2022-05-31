#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z')
        printf("lower case");
    else if(c>='A' && c<='Z')
        printf("upper case");
    else
        printf("invalid");
}
