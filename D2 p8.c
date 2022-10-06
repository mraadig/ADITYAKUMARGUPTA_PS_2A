#include<stdio.h>
void main()
{
 int i,j,k=0,s,o=0;
 for(i=1;i<=4;i++)
 {
     for(j=1;j<=4-i;j++)
        printf(" ");
        for(s=1;s<=i;s++)
     printf("*");

        for(s=i;s>=2;s--)

            printf("*");
        printf("\n");



 }
}

