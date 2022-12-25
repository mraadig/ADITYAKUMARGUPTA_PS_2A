#include<stdio.h>
void mean(int);
void median(int);
void main()
{
int i,n,x,a[20];
printf("enter the no. of elment  in array");
scanf("%d",&n);
printf("enter the elment  in array");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mean(n);
median(n);
}
void mean(int n)
{ int i,sum,a[20],mean;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];   
    }
    mean=sum/n;
    printf("the mean is%d",mean);
}
void median(int n)
{ int median;
int i,sum,a[20];
    if(n%2!=0)
    {
        median=a[(n/2)+1];
        printf("median is%d",median);
     }
     else
     {
        median=(a[(n/2)]+a[(n/2)+1])/2;
        printf("the median is%d",median);
     }
}