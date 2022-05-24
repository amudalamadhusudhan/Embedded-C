// 1. program for  string lower case to upper case 

#include<stdio.h>
void uppercase(char *a);
int main()
{
char a[100],b[100];
int i;
printf("enter the lower case string\n");
scanf("%s",a);
printf("lower case string =%s\n",a);
uppercase(a);
printf("uppercase case string =%s\n",a);
}

void uppercase(char *a)
{
int i;
for (i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z')
{
a[i]=a[i]-32;
}
}

}
