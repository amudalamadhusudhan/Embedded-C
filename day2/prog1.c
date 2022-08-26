// 1.program to perform operations

#include <stdio.h>
int main()
{
    int a = 10, b, sum = 0;
    int mul, mod, sub;
    float div;
    printf("enter the two whole numbers:\n");
    // scanf("%d%d", &a, &b);
    sum = (a + b);
    sub = (a - b);
    mul = (a * b);
    div = (a / b);
    mod = (a % b);
    printf("addtion:%d + %d = %d\n", a, b, sum);
    printf("subtraction:%d-%d =%d\n", a, b, sub);
    printf("multiplication:%d * %d = %d\n", a, b, mul);
    printf("division%d / %d = %f\n", a, b, div);
    printf("modulus of:%d %% %d = %d\n", a, b, mod);
    a = a++;
    a = a++ * a--;
    printf("%d", a);
    printf("comma %d", --a * ++a);
    return 0;
}
