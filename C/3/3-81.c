#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[100];
    int l,i;
    scanf("%s",&ch);
    l=strlen(ch);
    for(i=0; i<=l-1; i++)
    {
        if(islower(ch[i]))
               putchar( toupper(ch[i]));
                else
                   putchar( tolower(ch[i]));

        }
return 0;
}
