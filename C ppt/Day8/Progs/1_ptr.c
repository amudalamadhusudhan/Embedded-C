#include<stdio.h>
void
main ()
{
  int i1;
  int i2;
  int *ptr1;
  int *ptr2;
  i1 = 100;
  i2 = 200;
  ptr1 = &i1;
  ptr2 = &i2;

  printf (" i1 is  %d.......sizeof i1 is %d \n", i1,sizeof(i1));
  printf (" i2 is  %d \n", i2);
  printf ("i1 address......%p  \n", &i1);
  printf ("i2 address......%p \n", &i2);

  printf ("ptr1 (i1  address) is ...%p\n", ptr1);
  printf ("ptr2 (i2  address) is ...%p\n", ptr2);

  printf ("*ptr1  ...%d\n", *ptr1);
  printf ("*ptr2  ...%d\n", *ptr2);
  printf (" sizeof ptr1 is %d \n", sizeof(ptr1));
  
  
  *ptr1 = 300;
  printf (" i1 is  %d \n", i1);
  printf (" i2 is  %d \n", i2);




//  printf ("ptr1  address...%p\n", &ptr1);
 //printf ("ptr2  address...%p\n", &ptr2);

//  printf ("*ptr1  ...%d\n", *ptr1);
 // printf ("*ptr2  ...%d\n", *ptr2);
/*
  *ptr1 = 300;
  printf (" i1 is  %d \n", i1);
  printf (" i2 is  %d \n", i2);*/
}
