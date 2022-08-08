#include<stdio.h>
int
main (void)
{
  int i = 10;
  int *ptr = NULL;
  int **dptr = NULL;
  ptr = &i;
  dptr = &ptr;
  printf ("\n i = [%d]\n", i);
  *ptr = 20;// i=20;
  printf ("\n i = [%d]\n", i);
  **dptr = 30;// i=30
  printf ("\n i = [%d]\n", i);
 
 /* 
  printf ("\n addr of i = %u\n", &i);
  printf ("\n ptr is = %u\n", ptr);
  printf ("\n *dptr is  = %u\n", *dptr);

 
  printf ("\n ptr is = %p\n", &ptr);
  printf ("\n *dptr is  = %p\n", dptr); 
*/
  return 0;
}
