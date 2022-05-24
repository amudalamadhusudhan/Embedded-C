//1.program for string intrinsic functions 


#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
char c[100],*sub;
char d[100];
char b[100];
char *p,*q,*w;
p=c;
q=d;
w=b;
int len,len2,r;
printf("enter the string\n");
scanf("%s",p);
printf("enter the string to copy\n");
scanf("%s",q);
printf("enter the string to compare\n");
scanf("%s",w);
len=strlen(p);
printf("length of the %s =%d\n",p,len); 
len2=strlen(q);
printf("length of the %s =%d\n",p,len2); 
strcat(p,q); 
printf("concatination of= %s\n",p);

strcpy(p,q);
printf("copy of string = %s\n",p);

sub=strstr(p,"a");
printf("subset  of string= %s\n",sub);

r=strcmp(p,w);
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





