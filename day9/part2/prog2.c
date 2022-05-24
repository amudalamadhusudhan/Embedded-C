// 2.program for declarations

#include<stdio.h>
int main()
{
char *color[6] = {"red","green","blue","white","black","yellow"};

printf("the meaning of color  =      %p\n",color);
printf("the meaning of (color+2)= %p\n",(color+2));
printf("the value of *color     =%s\n",*color);
printf("the value of *(color+2) =%s\n",*(color+2));
printf("the value of *(color+2)= %s\n",*(color+2));
printf("the value of *(color+5) =%s\n",*(color+5));
printf("the value of color[5] = %s\n", color[5]);
}
