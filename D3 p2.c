#include<stdio.h>
void main()
{
    int i,fac=1,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
        sum=sum+(fac/i);

    }
    printf("%d",sum);
}
