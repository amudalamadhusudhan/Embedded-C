// 3.program for double pointer


#include<stdio.h>
int main()
{
  char ch = 'A';
  char *ptr = NULL;
  char **dptr = NULL;
  ptr = &ch;
  dptr = &ptr;
  printf ("\n ch      = [%c]\n", ch);
  printf ("\n *ptr    = [%c]\n", *ptr);
  printf ("\n **dptr  = [%c]\n", **dptr);

////////////////////////////////
  int  i= 10;
  int *pr = NULL;
  int **dpr = NULL;
  pr = &i;
  dpr = &pr;
  printf ("\n i      = [%d]\n", i);
  printf ("\n *pr    = [%d]\n", *pr);
  printf ("\n **dpr  = [%d]\n", **dpr);

/////////////////////////////////////
  int k = 10;
  int *p = NULL;
  int **d = NULL;
  p = &k;
  d = &p;
  printf ("\n i      = [%d]\n", k);
  *p = 20;
  printf ("\n i     = [%d]\n", k);
  **d = 30;
  printf ("\n i     = [%d]\n", k);
  return 0;
}






  
