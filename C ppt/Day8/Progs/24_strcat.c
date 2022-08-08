#include<stdio.h>
void concat(char* ,char* );
void main(void)
{
   char str1[25];
   char str2[25];
   //char str1[25],str2[25];
   printf("\nEnter First String:");
scanf("%s",str1);
   printf("\nEnter Second String:");
scanf("%s",str2);
   concat(str1,str2);
   printf("\nConcatenated String is %s",str1);
}

void concat(char *s1,char *s2)
{
     while(*s1!='\0')
             s1++;
     while(*s2!='\0')
     {
            *s1=*s2;
             s1++;
             s2++;
     }
      *s1='\0';
}


