#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[100];
    int i,j,l,f=1;
    scanf("%s",&ch);
    l=strlen(ch);
    for(i=0,j=l-1; i<l/2; i++,j--)
        if(ch[i]!=ch[j]){
                f=0;
        break;
        }

    if(f==1)
        printf("this string is a pelindrome");
    else
        printf("this is not a pelindrome");
    return 0;
}
