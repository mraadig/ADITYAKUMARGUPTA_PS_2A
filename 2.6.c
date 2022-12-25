#include<stdio.h>
main()
{
int i, j;
for(i=1;i<=5;i++)
{
for(j=5;j>i;j--)
printf(" ");
for(j=i;j<(i*2)-1;j++)
printf("%d",j);
for(j=(i*2)-1;j>=i;j--)
printf("%d",j);
printf("\n");
}
}

