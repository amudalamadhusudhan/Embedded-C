#include<stdio.h>
int
main (void)
{
  int  i= 10;
  int *ptr=NULL ;
  //ptr = &i;
  printf ("\n i = [%d]\n", i);
  printf ("\n *ptr = [%p]\n", ptr);
	if(ptr!= NULL)
  printf ("\n *ptr = [%d]\n", *ptr);
  ptr = &i;
  printf ("\n i = [%d]\n", i);
  printf ("\n *ptr = [%p]\n", ptr);
  printf ("\n *ptr = [%d]\n", *ptr);
  return 0;
}
