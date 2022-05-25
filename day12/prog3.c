//3. program for token concatination ##

#include<stdio.h>
#define concat(a,b) a##b
int main()
{
printf("%d\n",concat(10,20));
}

