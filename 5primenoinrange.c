#include<stdio.h>
int prime(int,int);
void main()
{
 int i,j,n,m;
 printf("n");
 scanf("%d",&n);
 printf("m");
 scanf("%d",&m);
 prime(n,m);
}
 int prime(int n,int m)
 { int i,j;
 for(i=n;i<=m;i++)
 { int c=0;
    for(j=1;j<=i;j++)
    { 
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==2)
        {
            printf("%d",i);
        }
    
 }   
}