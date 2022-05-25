
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
   // Open two files to be merged
   FILE *fp1 = fopen("file1.txt", "a+");
   FILE *fp2 = fopen("file2.txt", "a+");
  
   // Open file to store the result
   FILE *fp3 = fopen("file3.txt", "w+");
   char c[100];
   char k[100];
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
        puts("Could not open files");
         exit(0);
   }

   // Copy contents of first file to file3.txt
   while (fscanf(fp1,"%s",c) != EOF)
       fprintf(fp3,"%s\n",c);
   // Copy contents of second file to file3.txt
   while (fscanf(fp2,"%s",c) != EOF)
       fprintf(fp3,"%s\n",c);
   printf("Merged file1.txt and file2.txt into file3.txt\n");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
