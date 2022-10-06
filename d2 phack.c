#include <stdio.h>
int main()
{
	int num,i,j;
	scanf("%d", &num);
    for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
		if(i==0||i==num-1||j==(num-i-1))
         printf("*");
		 else
		 printf(" ");
	}
	printf("\n");
}return 0;
}


