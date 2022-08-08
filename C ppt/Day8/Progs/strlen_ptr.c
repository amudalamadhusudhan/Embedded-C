#include<stdio.h>
int length (char *);
void
main (void)
{
  char str1[50];
  int len;
  printf ("\nEnter String whose length has to be found:");
  scanf ("%s", str1);
  len = length (str1);
  printf ("\nlength of String %s is %d", str1, len);
}

int
length (char *s1)
{
  int l = 0;
  while (*s1 != '\0')
    {
      l++;
      s1++;
    }
  return l;
}
