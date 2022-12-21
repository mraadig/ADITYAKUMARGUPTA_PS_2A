#include<stdio.h>
void main()
{
    int n, a[100],i,temp;
    printf("No. of elments in A = ");
    scanf("%d",&n);
    printf("Enter the elemnts in A= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n-1;i=i+2)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    printf("Alternate Elements Swapped \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}