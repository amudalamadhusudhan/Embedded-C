//7.program for remove duplicate array elements


#include<stdio.h>
int main()
{
int i,j,v,n,a[100];
printf("enter the array size \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("enter the element a[%d]\t",i);
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i-1;j>=0;j--)
 {
 if(a[i]==a[j]) 
  {
    v=1;
  }
 }
if (v==0)
{
printf(" after removes the duplicates elements a[%d] %d\n ",i,a[i]);
}
v=0;
}
return 0;
}








