#include <stdio.h>
// tenary ifelse

int tenary(void)
{
    int number;
    scanf("%d", &number);

    (number % 2 == 0) ? printf("tenary Even Number\n") : printf("tenary Odd Number\n");

    return 0;
}

int ifelse(void)
{
    int number;
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("ifelse fumction  Even Number\n");
    }
    else
    {
        printf("ifelse function Odd Number\n");
    }

    return 0;
}
int main()
{
    tenary();
    ifelse();

    return 0;
}