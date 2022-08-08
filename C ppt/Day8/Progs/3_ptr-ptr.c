#include<stdio.h>
int
main (void)
{
  int **ptr = NULL;
  int *p = NULL;
  int i = 10;
  p = &i;
  ptr = &p;
  printf ("\n %d   %d   %d  \n", i,*p,**ptr);
  printf ("\n %p   %p   %p  \n", &i,p,*ptr);
  printf ("\n %p   %p  \n", &p,ptr);
  return 0;
}
