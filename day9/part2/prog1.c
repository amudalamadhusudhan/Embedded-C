//1. program for the declarations

#include<stdio.h>
int main()
{

float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}};
printf("the meaning of a table =%p\n",table);
printf("the meaning of (table+1)= %p\n",(table+1));
printf("the meaning of *(table+1) =%p\n",*(table+1));
printf("the meaning of (*(table)+1 =%p\n",(*(table)+1));
printf("the value of *(*(table+1) +1)= %lf\n",*(*(table+1) +1));
printf("the value of *(*(table)+1)=%lf\n",*(*(table)+1));
printf("the value of *(*(table+1)=%lf\n",*(*(table+1)));
printf("the value of *(*(table) + 1)+1 =%lf\n",*(*(table) + 1)+1);


}
