//odd the even
#include<stdio.h>
void main()
{
    int n,i,a[100],b[100],p=0,q=0;
    printf("Enter n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            a[p]=i;
            p++;
        }
        else
        {
            b[q]=i;
            q++;
        }
    }
    for(i=0;i<p;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=q-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }

}