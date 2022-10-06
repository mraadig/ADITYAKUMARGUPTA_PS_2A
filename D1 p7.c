#include<stdio.h>
void main()
{
    float c;
    printf("enter the temperature in celsius");
    scanf("%f",&c);
    if (c<0)
        printf("freezing weather");
    else if (c>=0&&c<=10)
        printf("very cold");
    else if(c>10&&c<=20)
    printf("cold");
    else if(c>20&&c<=30)
        printf("normal temprature");
    else if(c>30&&c<=40)
        printf("its hot");
    else
        printf("its very hot");
    }
