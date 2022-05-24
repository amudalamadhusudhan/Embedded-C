//5.program for to find substring 


#include <stdio.h>
#include <string.h>

//function declaration
int myStrStr(char* str, char* sub);

int main()
{
    char str[100] = { 0 };
    char strTocheck[10] = { 0 };

    printf("Enter complete string: ");
    scanf("%[^\n]s", str);
    getchar();

    printf("Enter string to check: ");
    scanf("%[^\n]s", strTocheck);

    if (myStrStr(str, strTocheck))
        printf("String \"%s\" found in \"%s\"\n", strTocheck, str);
    else
        printf("String \"%s\" not found in \"%s\"\n", strTocheck, str);

    return 0;
}

//function definition
int myStrStr(char* str, char* sub)
{
    int flag = 0;

    int i = 0, len1 = 0, len2 = 0;

    len1 = strlen(str);
    len2 = strlen(sub);

    while (str[i] != '\0') {
        if (str[i] == sub[0]) {
            if ((i + len2) > len1)
                break;

            if (strncmp(str + i, sub, len2) == 0) {
                flag = 1;
                break;
            }
        }
        i++;
    }

    return flag;

}
