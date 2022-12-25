#include<stdio.h>
int lcm(int,int,int);
void main()
{  int a,b,comp,x;
    printf("enter the value of x");
    scanf("%d",&a);
    printf("enter the value of y");
    scanf("%d",&b);
    comp=(a>b)?a:b;
    x=lcm(a,b,comp);
    printf("the lcm of given no. is %d",x);


}
int lcm(int x,int y,int comp)
{ while(1)
 { if(comp%x==0&&comp%y==0)
    {
       return comp;
        break;
    }
    else{
        comp++;
    }
  }
}