#include <stdio.h>
int main()
{
        char str1[12] = "desd";
        char *str2="desd";
        printf("size of str1 = %d\n", sizeof(str1)); //String size or pointer size ???
        printf("size of str2 = %d\n", sizeof(str2)); //pointer size or pointer size ???
        printf(" str1 = %s\n", str1);
        printf(" str2 = %s\n", str2);
	return 0;
}

