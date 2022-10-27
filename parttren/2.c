#include <stdio.h>
int main()
{
    int a, b, row = 0;
    char c;
    float d;
    double e;
    // printf("enter the values\n");
    // scanf("%d", &row);
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
            printf("%d", a);
        printf("\n");
    }
    printf(".....%d....", sizeof(a));
    printf("%d", sizeof(b));
    printf("%d", sizeof(c));
    printf("%d", sizeof(d));
    printf("%d", sizeof(e));
    return 0;
}