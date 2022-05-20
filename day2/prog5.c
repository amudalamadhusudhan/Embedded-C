//5.program for different operations

#include<stdio.h>
int main()
{
int i=8,j=5,exp1,exp2,exp3,exp4,exp5;
float x=0.005,y=0.01;
char c='c',d='d';

exp1=(3*i*j)%(2*d);
exp2=(i*j)%(c+2*d)/(x*y);
exp3=(5*(i+j)>'c');
exp4=(2*x+(y==0));
exp5=(x>y)&&(i>0)||(j<5);

printf("((3*i*j) %% (2*d))=%d\n",exp1);
printf("((i*j) %% (c+2*d)/(x*y))=%d\n",exp2);
printf("((5*(i+j)>'c'))=%d\n",exp3);
printf("(2*x+(y==0))=%d\n",exp4);
printf("((x>y)&&(i>0)||(j<5))=%d\n",exp5);
return 0;
}
