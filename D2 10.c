#include<stdio.h>
void main(){

    int i,j;

    for(i=3;i>=1;i--)
    {
        for(j=1;j<=3-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=2;i++)
    {
        for(j=2;j>i;j--)
            printf(" ");
         for(j=1;j<=2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
