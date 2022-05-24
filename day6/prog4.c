//4.program for print out all rrotation of a string

#include<stdio.h>
int main()
{
char a[100];
int i,j;
printf("enter rotation of a string\n");
scanf("%s",a);

for(i=0; a[i]!=0; i++)
{
for(j=i; a[j]!=0; j++)
{
printf("%c",a[j]);
}
for(j=0; j<i; j++)
{
printf("%c",a[j]);
}
printf("\n");
}

    return 0;
}

