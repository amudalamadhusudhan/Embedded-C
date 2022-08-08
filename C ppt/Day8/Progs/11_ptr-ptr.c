#include<stdio.h>
int
main (void)
{
  int **ptr = NULL;
  int *p = NULL;
  int i = 10;
  p = &i;
  ptr = &p;
  printf ("\n i = [%d]\n", i);
  printf ("\n *p = [%d]\n", *p);
  printf ("\n **ptr = [%d]\n", **ptr);
  return 0;
}
