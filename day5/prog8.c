//8.program for 2-D array


#include<stdio.h>
int main()
{
int a[3][3];

int i=0,j,n,m;
printf("enter the array size \n");
scanf("%d %d",&n,&m);

for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
printf("enter elemnets a[%d][%d]\t",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\n");
for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
{
printf("2-D array elemnets a[%d][%d]=[%d]\n",i,j,a[i][j]);
printf("\n");
}
}
return 0;
}
