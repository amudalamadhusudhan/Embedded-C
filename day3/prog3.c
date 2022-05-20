//3.program for palindrome 

#include<stdio.h>
int main()
{
int r,n=0,sum=0,pal;
printf("enter the values\n");
scanf("%d",&n);
pal=n; 
while(n!=0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(pal==sum)
{
printf("%d number is palindrome\n",pal);
}
else

printf("%d number is not a palindrome\n",pal);

return 0;
}


