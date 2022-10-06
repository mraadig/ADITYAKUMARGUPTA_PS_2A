#include<stdio.h>
void main()
{
 int i,j;
 for(i=1;i<=4;i++)
 {
     for(j=1;j<=4-i;j++)
        printf(" ");
        for(j=i;j<(i*2)-1;j++)
       printf("%d",j);
       for(j=(i*2)-1;j>=i;j--)
        printf("%d",j);
        printf("\n");

 }}
   int rows,space

   for (i = rows; i >= 1; --i)
    {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
}}
