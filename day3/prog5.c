// program for pattern

#include<stdio.h>
int main()
{
int a,b,row=0;
printf("enter the values\n");
scanf("%d",&row);
for(a=1;a<=row;a++)
{
for (b=1;b<=a;b++)
printf("%d",a);
printf("\n");
}

return 0;
}
