#include<bits/stdc++.h>
int main(){
float s,area,a,b,c;
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area=%.2f",area);
return 0;
}
