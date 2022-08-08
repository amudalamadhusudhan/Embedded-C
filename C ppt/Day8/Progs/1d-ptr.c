#include <stdio.h>
int
main ()
{
  int num[5] = { 21, 18, 57, 45, 50 };
  int i;
  int *iptr ;
  iptr = num;
  for (i = 0; i < 5; i++)
    {
printf ("\nElement num[%d] val : %d .addr..%p \n", i,*iptr,iptr);
      //iptr++;
      iptr=iptr+1;
      //iptr=iptr++;
    }
  return 0;
}
