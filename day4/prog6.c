// 6. program for factorial recursion

#include<stdio.h>
long factorial(int n);
int main()
{
int a,b,n;
long fact;
printf("enter the number:\n");
scanf("%d",&n);
fact=factorial(n);
printf("factorial of the number:%ld\n",fact);
return 0;
}
long factorial (int n)
{
if (n==0)
{
return 1;
}
else 
return (n*factorial(n-1));
}

