//10.program for sum of 2-D array matrices

#include<stdio.h>
int main()
{
int a[10][10];
int k[10][10];
int sum[10][10];
int i=0,j,p,q,r;

printf("enter the array size \n");
scanf("%d%d",&p,&q);
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{

printf("enter elemnets a[%d][%d]\t",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\n");
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{

printf("enter elemnets k[%d][%d]\t",i,j);
scanf("%d",&k[i][j]);
}
}




for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
 sum[i][j]=a[i][j]+k[i][j];

}
}


for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
printf("sum of 2d matrices  sum[%d] [%d]=[%d]\n",i,j,sum[i][j]);
printf("\n");
}
}
return 0;
}
