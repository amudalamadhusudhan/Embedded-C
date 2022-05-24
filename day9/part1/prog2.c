// 1. program for  string upper case to lower

#include<stdio.h>
void lowercase(char *a);
int main()
{
char a[100],b[100];
int i;
printf("enter the upper case string\n");
scanf("%s",a);
printf("upper case string =%s\n",a);
lowercase(a);
printf("lowercase case string =%s\n",a);
}

void lowercase(char *a)
{
int i;
for (i=0;a[i]!='\0';i++)
{
if(a[i]>='A'&&a[i]<='Z')
{
a[i]=a[i]+32;
}
}

}
