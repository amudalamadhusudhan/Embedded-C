#include<stdio.h>
int main ()
{
  int i, j;
  int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%d and its address is %p ......", a[i][j], &a[i][j]);
	  printf ("\n");
	}
      printf ("\n");
    }

  printf (" first 1 d array address  %p \n", a + 1);
  printf (" first 1 d array 0th element address  %p \n", *(a + 1));
  printf (" first 1 d array 2th element address  %p \n", *(a + 1) + 2);
  printf (" first 1 d array 2th element   %d \n", *(*(a + 1) + 2));


  return 0;

}
