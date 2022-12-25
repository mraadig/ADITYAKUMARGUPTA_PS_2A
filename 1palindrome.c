#include<stdio.h>
void rev();
void main()
{
 rev(); //if we pass here argument than we have to declear datatype in functon decleration and in defination

}
void rev()
   { int a,n,m,rev=0;
    printf("enter any three digit no.");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
    a=n%10;
    rev=rev*10+a;
    n=n/10;
    }
printf("the reverse of entered no. is%d\n",rev);
if(m==rev)
{
    printf("palindrome");
}
else
printf("not palindrome");
   }