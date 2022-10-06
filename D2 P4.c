#include<stdio.h>
void main()
{
    int i,j;
    char k='A';
    for(i=1;i<=4;i++)
    {
        for(j=0;j<=i-1;j++)


        printf("%c",k+j);
        k++;
        printf("\n");
    }
}
