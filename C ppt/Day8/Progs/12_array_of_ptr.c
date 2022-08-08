#include <stdio.h>
void main ()
{
  int num[] = { 10, 20, 30 };
  int i, *ptr[3];

  for (i = 0; i <= 2; i++)
    {
      ptr[i] = &num[i];		/* assign the address of integer. */
    }
  for (i = 0; i <= 2; i++)
    {
      printf ("num[%d] = %d\n", i, *ptr[i]);
    }
}
