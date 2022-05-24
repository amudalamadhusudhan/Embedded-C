//11.program  2-D array matrices inverse and transpose

#include<stdio.h>
int main()
{
int a[10][10];
int t[10][10];

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
 t[j][i]=a[i][j];

}
}


for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
printf("transpose[%d] [%d]=[%d]\n",i,j,t[i][j]);
printf("\n");
}
}
return 0;
}
