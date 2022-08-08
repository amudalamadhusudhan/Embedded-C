#include<stdio.h>
void main()
{
 int a=10;
char ch='A';
int *ptr_b;
char  *ptr_c;
ptr_b = &a;
ptr_c = &ch;

printf (" %lu \n",sizeof(a) );
printf (" %lu \n",sizeof(ch) );
printf (" %d , %d , %lu \n",a,*ptr_b,sizeof(ptr_b) );
printf (" %c , %c , %lu \n",ch,*ptr_c,sizeof(ptr_c) );
}

