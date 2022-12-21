#include<stdio.h>
#include<math.h>
void main()
{
    float x,sum=1,fac=1;
    int i,j,n;
    printf("enter X element");
    scanf("%d",&x);
    printf("enter nth element");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  for(j=1;j<=n;j++)
        fac=fac*j;
        if (i%2==0)
        {
        sum=sum+pow(x,i)/fac;
        }
        else{
            sum=sum-pow(x,i)/fac;
        }
    }
    printf("%f",sum);


}
