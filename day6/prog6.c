// program for remove characters axcept alphabets

#include<stdio.h>
int main()
{
char a[100],b[100];
int i,j=0;
printf("enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
{
b[j]=a[i];
j++;
}
}
b[j]='\0';
printf("removing the characters from string %s\n",b);
return 0;
}

