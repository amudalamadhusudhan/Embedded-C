//4.program for 2-d string array 

#include<stdio.h>
#include<string.h>
int main()
{
char name[10][20];
int i,n,r;
char d[100];
char c[100];
printf("Enter the size of string:\n");
scanf("%d",&n);


     // reading string from user
printf("Enter %d names:\n",n);
for(i=0; i<n; i++)
{
scanf("%s[^\n]",name[i]);
}
printf("Enter  string to copy in sting array name[]\n");
scanf("%s[^\n]",d);
printf("Enter string to compare in sting array name[0]:\n");
scanf("%s[^\n]",c);
printf("\n");
     // dispaying strings
printf("all entered names are:\n");
for(i=0;i<n;i++)
{
printf("%s\n",name[i]);
}    

strcpy(name[3],d);
printf("%s\n",name[3]);
r=strcmp(name[0],c);
if(r==0)
printf("strings are equal %d\n",r);
else if(r<0)
 printf("strings are not equal negatibe value %d\n",r);
else 
printf("strings are not equal pastive value %d\n",r);




return 0;
}
