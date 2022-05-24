//1.program for pointer addresses

#include<stdio.h>
int main()
{
char ch='c';
char *cp=&ch;

int a=10;
int *ip=&a;

float f=1.500;
float *fp=&f;

double d=33.33;
double *dp=&d;
 printf(" variable adress \n &ch=%p\n &a=%p\n &f=%p\n &d=%p\n",&ch,&a,&f,&d);
printf(" value \n *cp=%c\n *ip=%d\n *fp=%f\n *dp=%f\n",*cp,*ip,*fp,*dp);
return 0;


}
