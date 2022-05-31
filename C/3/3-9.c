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
        if(ch[i]=='z')
            printf("a");
        else if(ch[i]=='Z')
            printf("A");
        else if(ch[i]=='9')
            printf("0");
        else
            printf("%c",ch[i]+1);
    }
    return 0;
}
