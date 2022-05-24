//6.program for 2-D array using pointer


#include<stdio.h>
int main()
{
int a[3][3];
int i=0,j,n,m,*p;
p=&a[0][0];
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
printf("2-D array elemnets p[%d][%d]=[%d]\n",i,j,*(p+i)+j);
printf("\n");
}
}
return 0;
}
