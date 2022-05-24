//2.program for copy the array elements using pointer

#include<stdio.h>
int main()
{
int a[10]={5,7,9,8,2,3};
int b[10];
int i;
int *p=a;

for(i=0;i<6;i++)
{
printf(" 1st array elements a[%d]= %d\n ",i,*(p+i));
}
for (i=0;i<6;i++)
{
b[i]=*(p+i);
}
for(i=0;i<6;i++)
{
printf(" copied 2nd array b[%d]=%d\n ",i,b[i]);
}



return 0;
}






