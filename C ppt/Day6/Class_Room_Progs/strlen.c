#include <stdio.h>
#include <string.h>
int main()
{
   char s[10]="CDAC",ch;
   int i,len=0;

   
   for(i=0;s[i]!='\0';++i)
   {
           ++len;
   }
   printf("string len is %d \n", len);
   printf("size of s  is %u \n", sizeof(s));
   printf("string length using strlen string lib function is %u \n", strlen(s));
   return 0;
}
