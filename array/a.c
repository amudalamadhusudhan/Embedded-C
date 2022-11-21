#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 7, 10, 6};
    // a[4] = a[4];
    printf("%d\n", ++a[4]);
    scanf("%d", &a[5]);
    printf("%d\n", a[5]);
    printf("%d\n", sizeof(a));
    printf("%p\n", &a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p", &a[0]++);
}