#include <stdio.h>
void exor();
int main()
{
    int a = 10, b = 20;
    printf("before swap a %d b %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swaping a %d b %d\n", a, b);
    exor();
    return 0;
}

void exor()
{
    int a = 10, b = 20;
    printf("before swap a %d b %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("after swaping a %d b %d\n", a, b);
}