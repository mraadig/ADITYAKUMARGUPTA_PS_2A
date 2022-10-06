#include<stdio.h>
void main()
{ int c1,c2;
printf("enter the coodinates");
scanf("%d\n %d",&c1,&c2);
if (c1>0&&c2>0)
printf("first quadrant");
else if (c1<0&&c2>0)
    printf("second quadrant");
else if (c1<0&&c2<0)
    printf("third quadrant");
else
    printf("fourth quadrant");
}
