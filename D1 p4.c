#include<stdio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    (year%4==0&&year!=100||year%400==0)?printf("leap year"):printf("not a leap year");

}
