// program for swap operation using call by reference


#include<stdio.h>
void swap (int *,int *);
int main()
{
int a,b;
printf("enter the number\n");
scanf("%d%d",&a,&b);
printf(" before swaping the content of varibales a=%d,b=%d\n ",a,b);
 swap(&a,&b);
printf(" after swaping the content of varibales a=%d,b=%d\n ",a,b);
return 0;
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;

}
