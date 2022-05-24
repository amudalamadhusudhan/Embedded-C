#include<stdio.h>
int main()
{
char a[100];
char *p=a;
int i,vowels=0,consonants=0,digits=0,characters=0;
printf("enter the string\n");
scanf("%s",a);
while (p[i]!='\0')
{
if(*p=='a'||*p=='e'||*p=='a'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||a[i]=='E'||*p=='I'||*p=='O'||*p=='U')
{
vowels++;
}
else if(*p>='a'&& *p <='z'||*p>='A'&& *p<='Z')
{
consonants++;
}
else if (*p>=48 && *p<=57)
{
digits++;
}
else
{
characters++;
}
p++;
}
printf("vowels= %d\n",vowels);
printf("consonants= %d\n",consonants);
printf("digits= %d\n",digits);
printf("characters= %d\n",characters);
}
