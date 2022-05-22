//5. program for reverse integer using recursion

#include<stdio.h>
int reverse(int , int );
int main()
{
int n, result;
printf("Enter number:\n");
scanf("%d",&n);
result = reverse(n,0);

printf("Reverse of %d is %d\n",n,result);
return 0;
}

int reverse(int num, int rev)
{
if(num==0)
return rev;
 else
   return reverse (num/10, rev*10 + num%10);
}        

