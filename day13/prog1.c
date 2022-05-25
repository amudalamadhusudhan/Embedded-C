#include <stdio.h> 
int main()
{  
char c[100];
char s[100];
int r,n,m;
printf("writing into the from the file\n");
FILE *f;  
f = fopen("ma.txt", "w");  
printf("enter the roll number\n");
scanf("%d",&r);
printf("enter the name\n");
scanf("%s",c);
printf("enter the marks\n");
scanf("%d",&m);
fprintf(f,"student roll number =%d\n student name =%s\n stdent markd =%d\n",r,c,m);
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
