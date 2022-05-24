//5.program for reversing the 1-D array elements


#include<stdio.h>
int main()
{
int i, a[100];
int n,b=0;
printf("enter the array size \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter the element a[%d]\t",i);
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("reversing the elements a[%d]\n",a[i]);
}
return 0;

}








