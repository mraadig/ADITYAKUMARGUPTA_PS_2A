#include<stdio.h>
void main()
{
    int i,j,k,z=0,n=5;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",j);

        }

        for(k=1;k<=2*n-2*i;k++)
            { printf(" "); }
        z=i;
        for(j=1;j<=i;j++)

        {printf("%d",z);
        z--;}
        printf("\n");

}}
