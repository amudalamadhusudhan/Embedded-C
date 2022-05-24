//1.program for sum of all array elements

#include<stdio.h>
int main()
{
int a[30];
int i,n,sum=0;
printf("enter the size of an array\n");
scanf("%d",&n);
for (i=0;i<=n;i++)
{
printf("enter the element a[%d]\t",i);
scanf("%d",&a[i]);
}
for (i=0;i<=n;i++)
{
sum=sum+a[i];
printf("array elements [%d]\n",a[i]);
//printf("loop sum %d\n",sum);
}
printf("sum of all array elements= %d\n",sum);
return 0;
}
