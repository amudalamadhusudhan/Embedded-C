//6. program for pattern

#include<stdio.h>
int main()
{
int a,b,row=1,sum=1;
printf("enter the values\n");
scanf(" %d",&row);
for(a=1;a<=row;a++)
{
for (b=1;b<=a;b++)
{
printf(" %d",sum);
sum++;
}
printf("\n");
}


return 0;
}
