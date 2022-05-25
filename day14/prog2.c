#include <stdio.h> 
int main( int argc, char *argv[] )  
{  
char c[100];
char s[100];
int i;
printf("writing into the from the file\n");
FILE *f;  
f = fopen("ma.txt", "w");  
for(i=0;i<argc;i++)
{
 printf("argument %d  supplied is %s\n",i, argv[i]);
}

fprintf(f,"student roll number =%d\n student name =%s\n stdent markd =%d\n",atoi(argv[1]),argv[1],atoi(argv[2]));

fclose(f);
printf("reading from the file\n");
FILE *fp;
fp= fopen("ma.txt", "r");  
while(fscanf(f,"%s",s)!=EOF)
{
printf("%s",s);
}
fclose(f);
}
