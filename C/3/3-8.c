#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    scanf("%s",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("The lowercase is %c\n",ch);
    }
        else
            printf("The uppercase is %c\n",ch);
        return 0;
    }
