
// Another example program to demonstrate working
// of enum in C
#include <stdio.h>

enum year
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    enum year y = Sep;
    int i;
    for (i = Jan; i <= Dec; i++)
    {
        printf("%d", i);
        printf("%d\n", y);
    }

    return 0;
}