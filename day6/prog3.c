// 3. program for  string upper case and lower case 

#include<stdio.h>
int main()
{
char a[100],b[100];
int i;
printf("enter the lower case string\n");
scanf("%s",a);
printf("enter the  upper case string\n");
scanf("%s",b);
for (i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z')
{
a[i]=a[i]-32;
}
}
printf("uppercase string =%s\n",a);

for (i=0;b[i]!='\0';i++)
{
if(b[i]>='A'&&b[i]<='Z')
{
b[i]=b[i]+32;
}
}
printf("lower case string =%s\n",b);
return 0;
}

