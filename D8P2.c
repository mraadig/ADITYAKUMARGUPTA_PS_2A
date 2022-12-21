#include<stdio.h>
#include<math.h>
void main()
{   int a,b,k;
printf("enter the value of a,b,k");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&k);
    a=pow(a,b);
    while(k>0)
    {
        b=a%10;
        a=a/10;
       k--;
    } 
    printf("%d",b);


}