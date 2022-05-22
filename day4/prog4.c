//4.program for prime fibonacci recursive and non recursive

#include<stdio.h>
int fib(int n);
int fibonacci (int i);
int main()
{
int i,j,n;
printf("Enter the range : "); 
scanf("%d",&n);
printf("prime fibonacci recursive :\n"); 
for (i = 3; i<n; i++)
{
int val=fibonacci(i);
int prime=1;
for (j =2; j<val; j++)
{
if(val%j==0)
{
prime=0;
break;
}
}
if(prime==1)
{
  printf("%d\t",val);
}
}
printf("\n");
fib(n);

  return 0;
}
int fibonacci(int i)
{
   if(i == 0) return 0;
   if(i == 1) return 1;
   return (fibonacci(i-1) + fibonacci(i-2));
}

int fib(int n)
{ 
int aa=0,prev=0, present=1,fibo=1,i,count; 

 //-----------Logic to find Fibo Series------- 
/*while(fibo<1) 
{ 
fibo=prev + present++; 
// printf("%d\t",fibo); 
}
 present--; */
printf("prime fibonacci non recursive :\n"); 
while(aa++<=n) 
{ 

 prev=present;
 present=fibo;
 fibo=present+prev; 

 count=0; 
for(i=1;i<=fibo;i++) 
{ 
if(fibo%i == 0) 
count++; 
}
 i--; 
if(count==2) 
printf("%d\t",i);

 }
printf("\n");
}



