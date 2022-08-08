#include<stdio.h>
int
main (void)
{
  char **dptr = NULL;
  char *ptr = NULL;
  char ch = 'A';
  ptr = &ch;
  dptr = &ptr;
  //printf ("\n ch = [%p]\n", &ch);
  printf ("\n  [%p]\n", &ptr);
  printf ("\n  [%p]\n", dptr);
  /*printf ("\n *ptr = [%c]\n", *ptr);
  printf ("\n *ptr = [%c]\n", *ptr);
  printf ("\n **dptr = [%c]\n", **dptr);*/

/*
  **dptr='x'; // ch='x';  or *ptr='x';
  // ch='x'; // or *ptr='x';
  printf ("\n ch = [%c]\n", ch);
  printf ("\n *ptr = [%c]\n", *ptr);
  printf ("\n **dptr = [%c]\n", **dptr);
*/
  return 0;
}
