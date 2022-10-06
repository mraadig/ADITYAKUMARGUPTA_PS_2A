#include<stdio.h>
void main()
{ int i,n,fac=1,sum=0;
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     fac=fac*i;
    sum=sum+fac;
    }
    printf("%d",sum);
 }


