#include <stdio.h>

int main()
{
    int a[2][4] = {1, 2, 3, 7, 10, 6, 8, 9};
    // a[4] = a[4];
    printf("%d\n", --a[0][3]);
    scanf("%d", &a[1][3]);
    printf("%d\n", ++a[1][3]);
    printf("%d\n", sizeof(a));
    printf("%p\n", &a);
    printf("%p\n", &a[0][0]);
    printf("%p\n", &a[0][1]);
    printf("%p", &a[0][2]);
}