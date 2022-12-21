#include<stdio.h>
void main()
{
    int a,d,i,k=0;

    printf("input a two digit no.");
    scanf("%d",&a);
    while(a>0)
    {   d=a%10;
        k=k+d;
        a=a/10;

    }
    printf("%d",k);
}