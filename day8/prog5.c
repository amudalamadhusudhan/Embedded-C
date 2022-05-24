//5.program for search a element in 1-D array usind pointer

#include<stdio.h>
int main()
{
int i,n,s,a[100];
int *p,b=0;
p=a;
printf("enter array size\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter the 1-d array elements element a[%d]\t",i);
scanf("%d",&a[i]);
}
printf("enter the element to search \n");
scanf("%d",&s);

for(i=0;i<n;i++)
{
if(s==*(p+i))
{
printf(" element is founded *p+%d = %d\n",i,s);
}
else 
printf(" %d elemnent is not found\n",s);
}

return 0;
}
