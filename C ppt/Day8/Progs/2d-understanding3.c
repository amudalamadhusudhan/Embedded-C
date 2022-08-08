#include<stdio.h>
int main ()
{
  int i, j;
  int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  printf ("  array base address  %u \n", a );

  printf (" first 1 d array address  %u \n", a + 1);
  printf (" first 1 d array 0th element address  %u \n", *(a + 1));
  printf (" first 1 d array 2th element address  %u \n", *(a + 1) + 2);
  printf (" first 1 d array 2th element   %d \n", *(*(a + 1) + 2));

  printf (" first 2 d array address  %u \n", a + 2);
  printf (" first 2 d array 0th element address  %u \n", *(a + 2));
  printf (" first 2 d array 1th element address  %u \n", *(a + 2) + 1);
  printf (" first 2 d array 1th element   %d \n", *(*(a + 2) + 1));
  return 0;
}
