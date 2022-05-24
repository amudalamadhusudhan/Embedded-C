//3.program for array elements and addresses


#include<stdio.h>
int main()
{
int a[100];
int i,n,sum=0;
printf("enter the array size \n");
scanf("%d",&n);

for (i=0;i<=n;i++)
{
printf("enter the element a[%d]\t",i);
scanf("%d",&a[i]);
}
for (i=0;i<=n;i++)
{
printf("array element a[%d]=address[%p]=%d\n",i,&a[i],a[i]);
}
return 0;
}
