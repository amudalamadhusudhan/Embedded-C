// program for reverse the string using pointer 

#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
char *s=a;
int len,i;
printf("enter the string to reverse\n");
scanf("%s",a);
len =strlen(a);
printf("the string reverse is \n");
for (i=len;i>=0;i--)
{
printf("%c",*(s+i));
}
printf("\n");

return 0;


}





