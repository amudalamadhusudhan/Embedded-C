//6.program sort elements in array

#include<stdio.h>
int main()
{
int i, a[100];
int n,v,j,b=0;
printf("enter the array size \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter the element a[%d]\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j]) 
  {
    v=a[i];
    a[i] =a[j];
    a[j] = v;
  }
 }
}

for(i=0;i<n;i++)
{
printf("the sorted elements a[%d] %d\n ",i,a[i]);
}
return 0;
}








