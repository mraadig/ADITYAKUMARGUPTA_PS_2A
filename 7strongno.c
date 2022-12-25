#include<stdio.h>
int fac(int);
//strong no.is 145 i.e sum of (fac1+fac4+fac5)=145,some strongs no. are 1,2,145,40585
void main()
{ int n,a,x,m,sum=0;
printf("enter the no.");
scanf("%d",&m);
n=m;
while(n>0)
{
    a=n%10;
    x=fac(a);
    sum=sum+x;
   n=n/10;
}
if(sum==m){
printf("strong no.");
}
else{
    printf("not strong no.");
}
}
int fac(int x)
{ int i,f,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}