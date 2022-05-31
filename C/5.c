#include<stdio.h>
int main()
{
    int a[100],i,j,n,p,num;
    //input size of array
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    //position to delete
    scanf("%d",&p);
    for(j=p; j<=n-1; j++)
        a[j]=a[j+1];
    n=n-1;
    printf("The new list is: ");
    for(i=1; i<=n; i++)
        printf("%d ",a[i]);
    return 0;
}
