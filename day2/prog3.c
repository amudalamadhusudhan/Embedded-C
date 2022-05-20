//3.program for addition and assignment operators

#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the three whole numbers:\n");
scanf("%d%d%d",&a,&b,&c);
a+=b;
c=c+b;
printf("result a+=b =%d\n",a);
printf("result c+b 5=%d\n",c);
return 0;
}
