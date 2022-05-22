//7.program for swaping

#include<stdio.h>
void swap (int x ,int y);
int main()
{
int a,b;
printf("enter the number\n");
scanf("%d%d",&a,&b);
printf(" before swaping the content of varibales a=%d,b=%d\n ",a,b);
 swap(a,b);


return 0;
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf(" after swaping the content of varibales a=%d,b=%d\n ",x,y);
}
