#include<stdio.h>
int main()
{
    int ar1[100],ar2[100],i,n1,n2,j;
    //Input the number elements to be stored in the first array :
    scanf("%d",&n1);
    for(i=0; i<n1; i++)
        scanf("%d",&ar1[i]);
    //Input the number elements to be stored in the second array :
    scanf("%d",&n2);
    for(i=0; i<n2; i++)
        scanf("%d",&ar2[i]);
    for(i=n1, j=0; i<n1+n2; i++, j++)
        ar1[i]=ar2[j];
    printf("The merged array is:\n");
    for(i=0; i<n1+n2; i++)
        printf("%d ",ar1[i]);
    return 0;
}
