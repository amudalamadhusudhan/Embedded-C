//9.program for 2-D array  copy  onther  2-D array


#include<stdio.h>
int main()
{
int a[3][3];
int k[10][10];
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
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
 k[i][j]=a[i][j];

}
}


for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
printf("copy 2d array to onther 2d array elemnets k[%d] [%d]=[%d]\n",i,j,k[i][j]);
printf("\n");
}
}
return 0;
}
