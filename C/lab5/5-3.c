#include<stdio.h>
int main()
{
    char c;
    printf("Enter character M/F: ");
    scanf("%c",&c);
    switch(c)
    {
    case 'M':
        printf("gender is male");
    case 'F':
        printf("gender is female");
    default:
        printf("error");
    }
}
