#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
int lower,upper;
lower = getchar();
upper = toupper(lower);
putchar(upper);
putchar('\n');
return 0;
}
