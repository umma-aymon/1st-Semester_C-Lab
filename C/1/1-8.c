#include<stdio.h>
#include<math.h>
int main(){
float x,y,u,y1;
scanf("%f",&x);
u=(x-1)/x;
y=u+(u*u)/2+(u*u*u)/3+(u*u*u*u)/4;
y1=u+pow(u,2)/2+pow(u,3)/3+pow(u,4)/4;
printf("y=%f y1=%f",y,y1);
return 0;
}
