#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch,ch1;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("%c",toupper(ch));
    }
    else
        printf("%c",tolower(ch));
               return 0;
    }
