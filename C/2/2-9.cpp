#include<stdio.h>
#include<string.h>
int main()
{
    int d,m,y;
    scanf("%d-%d-%d",&d,&m,&y);
    if(m==1)
        printf("January ");
    else if(m==2)
        printf("February ");
    else if(m==3)
        printf("March ");
    else if(m==4)
        printf("April ");
    else if(m==5)
        printf("May ");
    else if(m==6)
        printf("June ");
    else if(m==7)
        printf("July ");
    else if(m==8)
        printf("August ");
    else if(m==9)
        printf("September ");
    else if(m==10)
        printf("October ");
    else if(m==11)
        printf("November ");
    else if(m==12)
        printf("December ");
    if(d==1)
        printf("1st,");
    else if(d==2)
        printf("2nd,");
    else if(d==3)
        printf("3rd,");
    else if(d>=4&&d<=31)
        printf("%dth,",d);
    printf("%d",y);
    return 0;
}
