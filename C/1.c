#include<stdio.h>
int main()
{
    int ar1[100],ar2[100],i,n;
    //Input the number elements to be stored in the first array :
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ar1[i]);
    for(i=0; i<n; i++)
        ar2[i]=ar1[i];
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<3; i++)
        printf("%d ",ar1[i]);
    printf("\nThe elements copied into the second array are :\n");
    for(i=0; i<3; i++)
        printf("%d ",ar2[i]);
    return 0;
}
