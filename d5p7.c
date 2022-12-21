#include<stdio.h>
void main()
{
    int a[100],i,n,temp;
    printf("Element in A= ");
    scanf("%d",&n);
    printf("Enter elements in A= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse of the array=\n");
    for(i=0;i<=n/2;i++)
    {
        
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}