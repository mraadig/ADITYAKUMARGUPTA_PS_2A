#include<stdio.h>
int weekday(int d, int m, int y)
{   printf("Enter the date in D M Y format");
    scanf("%d %d %d",&d,&m,&y);
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y = m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main()
{
    int day = weekday(30, 8, 2010);
    if(day==1)
        printf("Sunday");
    else if(day==2)
        printf("Monday");
    else if(day==3)
        printf("Tuesday");
    else if(day==4)
        printf("Wednesday");
        else if(day==5)
        printf("Thursday");
        else if(day==6)
        printf("Friday");
        else if(day==7)
        printf("Saturday");
    return 0;
}
