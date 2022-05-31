#include<stdio.h>
int main()
{
    int ar[100],i,n,max=0,min=0;
    //Input the number elements to be stored in the array :
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    min=ar[0];
    max=ar[0];
    for(i=1; i<n; i++)
    {
        if(ar[i]>max)
            max=ar[i];
        if(ar[i]<min)
            min=ar[i];
    }
    printf("Maximum element is:%d\n",max);
    printf("Minimum element is:%d\n",min);
    return 0;
}
