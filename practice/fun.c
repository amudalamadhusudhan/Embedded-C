#include<stdio.h>
int add(int, int); /* Function prototype */

int main()
{
    int i,a = 4, b = 3, c;
    c = add(a, b);
f
    printf("c = %d\n", c);
    return 0;
}
int add(int a, int b)
{
/* returns the value and control back to main() function */
   return (a+b);
}