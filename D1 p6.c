#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter the side of triangle");
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1==s2&&s2==s3)
        printf("equilateral");
    else if(s1==s2||s2==s3||s3==s1)
        printf("isosceles");
    else
        printf("scalene");
}
