//1.program for adds 1 to N using for loop continue

#include<stdio.h>
int main()
{
int a,N,sum=0;
printf("enter the value\n");
scanf("%d",&N);
for(a=0;a<=N;a++)
{

if(a%5==0)
{
continue;
}
sum=sum+a;
printf("all numbers 1 to %d except div by 5 = %d\n",N,sum);
}
printf("sum of 1 to %d except div by 5 = %d\n",N,sum);
return 0;
}
