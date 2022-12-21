#include<stdio.h>
void main()
{  
 int a[10][10],r,c,i,j;  
  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}     
  for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)  
{
  if(i!=j) 
  {
    int temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
    printf("%d",temp);

  }}}

  for(i=0;i<r;i++)    
{    
for(j=0;j<c/2;j++)  
{ int temp=a[i][j];
  a[i][j]=a[i][c-j-1];
  a[i][c-j-1]=temp;
  }
} 
printf("Matrix after rotating 90* clockwise \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");}

}

