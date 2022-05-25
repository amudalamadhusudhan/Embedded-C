// 2. program for conditional complization

# include <stdio.h>
# define a 10
#define b 10
int main()
{
int sum;
float s,c;
   #ifdef a
   sum=a+b;
   printf("sum of two integers=%d\n",sum);
   #endif
   #ifndef c
    s=a+c;
   printf("sum of two integers %f",s);
   #endif
  
}
