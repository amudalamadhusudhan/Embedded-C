//2.program for while loop

#include<stdio.h>
int main()
{
int a=1,N=0,sum=0;
printf("enter the values\n");
scanf("%d",&N);
while(a<=N)
{
if(a%2!=0)
{
sum=sum+a;
}

a++;
printf("sum od all odd numbers 1 to %d  = %d\n",N,sum);
}
printf("sum of all odd numbers1 to %d  = %d\n",N,sum);
return 0;
}
