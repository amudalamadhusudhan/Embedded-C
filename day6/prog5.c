

#include<stdio.h>
int main()
{
char a[100];
int i,vowels,consonants,digits,characters;
printf("enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
vowels++;
}
else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
{
consonants++;
}
else if (a[i]>='0' && a[i]<='9')
{
digits++;
}
else
{
characters++;
}
}
printf("vowels= %d\n",vowels);
printf("consonants= %d\n",consonants);
printf("digits= %d\n",digits);
printf("characters= %d\n",characters);

return 0;
}

