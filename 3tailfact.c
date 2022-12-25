#include<stdio.h>
int facttail(int,int);
void main()
{ int c;
  c=facttail(5,1);
  printf("the factorial is%d",c);
}
int facttail(int n,int r)
{
    if(n==1)
    return r;
    else
    return facttail(n-1,n*r);
}