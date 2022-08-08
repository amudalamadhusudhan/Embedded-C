#include <stdio.h>
int
main ()
{
  int num[5] = { 21, 18, 57, 45, 50 };
  int i;

      printf("\n  0th element array addr...%p ...%p\n",num,&num[0]);

	printf("...0th element ...%d \n",num[0]);
	printf("...0th element ...%d \n",*(num+0));
      printf("\n  1st element array addr...%p ...%p\n",num+1,&num[1]);
	printf("...1th element ...%d \n",num[1]);
	printf("...1th element ...%d \n",*(num+1));
      printf("\n  2nd element array addr...%p ...%p\n",num+2,&num[2]);

	printf("...2th element ...%d \n",num[2]);
	printf("...2th element ...%d \n",*(num+2));
	printf("...2th element ...%d \n",*(*(num+2)));

/*
  for (i = 0; i < 5; i++)
    {
      printf("\n index  %d value %d",i,num[i]);
      printf("\n addr ...&num[i] .. %lu ",&num[i]);
      printf("\n addr ...num+i .. %lu ",num+i);
      printf("\n addr ...*(num+%d) .. %d ",i,*(num+i));
      //printf ("\n Array Element  %d . %d  %d addr.%lu .. %lu", i, num[i],
//	      *(num + i), num + i, &num[i]);
      //printf("\n Integer Array Element *(num + %d) : %d  ",i,*(num+i));
    }*/
  return 0;
}
