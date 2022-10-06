#include<stdio.h>
void main(){

    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=i+2;j++)
            printf(" ");
        for(j=3;j>=2*i-1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
