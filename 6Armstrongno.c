#include<stdio.h>
int armstrong(int);
void main()
{ int m;
    //armostrong no. are 153,407,370,371
    printf("enter the no.");
    scanf("%d",&m);
    armstrong(m);
  }
  
  int armstrong(int m)
   {int a,n,sum=0; 
    n=m;
    while(n>0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    if(sum==m)
    {
    printf("armstrong no.");
    }
    else{
        printf("not armstrong no.");
    }
}