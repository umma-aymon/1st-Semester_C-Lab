#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],Rock,Paper,Scissors,p1,p2;
    scanf("%s%s%s",&Rock,&Paper,&Scissors);
    printf("Rock, Paper, Scissors!\n");
    if(p1==Rock&&p2==Rock || p1==Paper&&p2==Paper || p1==Scissors&&p2==Scissors)
        printf("tie\n");
    if(p1==Rock&&p2==Scissors || p1==Scissors&&p2==Paper)
        printf("p1 wins\n");
}
