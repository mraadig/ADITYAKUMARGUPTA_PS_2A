#include<stdio.h>
void main()
{
    char ch;
    int Lc,Uc;

    printf("enter the character");
    scanf("%c",&ch);


    Lc=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

    Uc=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if (Lc||Uc)
        printf("vowel");
    else
        printf("not a vowel or consonant");
}
