//3.program for print the array elements using pointer 

#include<stdio.h>
int main()
{
int a[100];
int i,n;
int *p=a;
printf(" enter array size[] \t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf(" enter array elements a[%d]\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf(" using pointer array elements a[%d]= %d\n ",i,*(p+i));
}


return 0;
}






