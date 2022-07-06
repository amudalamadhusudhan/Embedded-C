#include <stdio.h>

int main()
{

    // create variables
    char operator= '+';
    int num1 = 8;
    int num2 = 7;

    // using variables in ternary operator
    int result = (operator== '+') ? (num1 + num2) : (num1 - num2);
    printf("%d\n", result);

    return 0;
}

// Output: 15