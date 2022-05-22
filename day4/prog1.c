//1.program for swap function 

#include<stdio.h>
void swap (int x ,int y);
int main()
{
int a,b;
printf("enter the number\n");
scanf("%d%d",&a,&b);
printf("before swap operation a=%d,b=%d\n",a,b);
 swap(a,b);


return 0;
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("after swap aperation a=%d,b=%d\n",x,y);
}
