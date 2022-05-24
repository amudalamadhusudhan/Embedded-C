//1.program for string intrinsic functions 


#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
char c[100],*sub;
char d[100];
char p[100];
int len,len2,r;
printf("enter the string\n");
scanf("%s%s",c,d);
len=strlen(c);
printf("length of the %s =%d\n",c,len); 
len2=strlen(d);
printf("length of the %s =%d\n",c,len2); 
strcat(c,d); 
printf("concatination of= %s\n",c);

strcpy(p,d);
printf("copy of string = %s\n",p);

sub=strstr(c,"a");
printf("subset  of string= %s\n",sub);

r=strcmp(c,d);
if(r==0)
{
printf(" comparision of two strings are the same %d\n",r);
}
else if(r>0)
{
printf("comparision of two strings are not same pastive non zero value %d\n",r);
}
else
{
printf("comparision of  two strings are not same negative zero value %d\n",r);
}

return 0;
}





