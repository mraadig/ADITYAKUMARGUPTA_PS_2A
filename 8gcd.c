#include <stdio.h>
int main()
{int Num1, Num2, Temp, GCD;
    printf("Please Enter two integer Values \n");
    scanf("%d %d", &Num1, &Num2);
    while (Num2!=0){
 	Temp=Num2;
 	Num2=Num1%Num2;
 	Num1=Temp;
    }
    GCD=Num1;
    printf("GCD=%d",GCD);
    return 0;
}