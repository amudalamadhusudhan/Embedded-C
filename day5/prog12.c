//12.program for  3-D array 

#include<stdio.h>
int main()
{
int a[3][3][3];
int i=0,j,k,sum=0,p,q,r;

printf("enter the array size \n");
scanf("%d%d%d",&p,&q,&r);
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
for (k=0;k<r;k++)
{
printf("enter elemnets a[%d][%d][%d]\t",i,j,k);
scanf("%d",&a[i][j][k]);
}
}
}
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
for (k=0;k<r;k++)
{
printf("3-d array elemnets a[%d] [%d] [%d]=[%d]\n",i,j,k,a[i][j][k]);
printf("\n");
}
}
}
return 0;
}
