#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("Size of int: %d bytes\n",sizeof(i)); // 4
    printf("Size of float: %d bytes\n",sizeof(f)); // 4
    printf("Size of double: %d bytes\n",sizeof(d)); // 8
    printf("Size of char: %d bytes\n",sizeof(c)); // 1
    printf("Size of float: %e bytes\n",sizeof(f));// 1.697597e-313
}
