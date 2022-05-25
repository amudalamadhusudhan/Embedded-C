//1. program for to smallest and largest number using command line argumnets

#include <stdio.h>
int main( int argc, char *argv[] )  
{
int i,great=0,s=0,j,max,min;
   printf("Program name s %s\n", argv[0]);
   printf("argument count is %d\n", argc);

for(i=0;i<argc;i++)
{
 printf("argument %d  supplied is %s\n",i, argv[i]);
}
for(i=1;i<argc;i++)
{
if(atoi(argv[i])>max)
{
max=atoi(argv[i]);
}
if(atoi(argv[i])<min)
{
 min=atoi(argv[i]);
}
}
printf("the largest number is %d\n",max);
printf("the lowest number is %d\n",min);
       


}

