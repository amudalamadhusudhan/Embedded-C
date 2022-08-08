#include<stdio.h>
#include<string.h>

int main()
{
char s[5][20], t[20];
int i, j, count;

printf("\nEnter how many strings are you want : ");
scanf("%d",&count);
printf("enter the string one by one:");
for (i = 0; i < count; i++)
scanf("%s", s[i]);
for (i = 0; i < count; i++)
printf("%s\n", s[i]);

for (i = 0; i < count-1; i++) {
for (j = i+1; j < count; j++) {
if (strcmp(s[i], s[j]) > 0) {
strcpy(t, s[i]);
strcpy(s[i], s[j]);
strcpy(s[j], t);
}
}
}

printf("\nStrings in order are : ");
for (i = 0; i < count; i++)
printf("\n%s", s[i]);

return 0;

}
