//============================================================
// size of the array in main and fun
//============================================================

#include<stdio.h>

void display (int[], int);
//void display(int , int);
//void display(int a[3], int);

int
main ()
{
  int arr[3]={10,20,30};
  int i;
  printf ("In main function\n");
  printf ("%lu\n", sizeof (arr));
  display (arr, 3);

  printf ("In main function\n");
  printf ("%d\n", arr[0]);
  printf ("%d\n", arr[1]);
  printf ("%d\n", arr[2]);
  return 0;
}
//void display(int arr[3])
void
//display (int *arr, int n)
display (int arr[], int n)
{
  printf ("In function\n");
  //printf ("%lu\n", sizeof (arr));
  printf ("%d\n", arr[0]);
  printf ("%d\n", arr[1]);
  printf ("%d\n", arr[2]);
	arr[2]=40;
  printf (" after change %d\n", arr[2]);
  return;
}
