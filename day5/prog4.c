//4.program for gretest element in array 


#include<stdio.h>
int main()
{
int i, a[5];
int n,b=0;

printf("enter the array size \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter the element a[%d]\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(b < a[i])

b=a[i];

}
printf("the greatest element a[%d]\n",b);
return 0;

}








