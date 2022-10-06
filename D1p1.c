#include<stdio.h>
void main()
{
    int basic,allow,TS;
    float hra,da,pf;
    char ch;
    printf("enter the basic\n");
    scanf("%d",&basic);
    printf("enter the character\n");
    scanf("%d",&ch);


    if(ch=='a')
    allow = 1700;
    else if( ch=='b')
    allow = 1500;
    else
    allow= 1100;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    TS= basic+hra+da+allow-pf;
    printf("total=%d",TS);


}
