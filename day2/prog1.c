//1.program to perform operations

#include<stdio.h>
int main()
{
int a,b,sum =0;
int mul,mod,sub;
float div;
printf("enter the two whole numbers:\n");
scanf("%d%d",&a,&b);
sum=(a+b);
sub=(a-b);
mul=(a*b);
div=(a/b);
mod=(a%b);
printf("addtion:%d + %d = %d\n",a,b,sum);
printf("subtraction:%d-%d =%d\n",a,b,sub);
printf("multiplication:%d * %d = %d\n",a,b,mul);
printf("division%d / %d = %f\n",a,b,div);
printf("modulus of:%d %% %d = %d\n",a,b,mod);
return 0;
}

