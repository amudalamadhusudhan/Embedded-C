#include <stdio.h>
int main()
{
    extern int a;
    // a = 30;
    printf("%d\n", a);
    return 0;
}
int a = 20;