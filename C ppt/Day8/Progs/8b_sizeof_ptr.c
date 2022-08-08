//Find out the sizeof pointers and arrays

#include<stdio.h>


int main()
{
	int a[10], i;
	int *ptr;

	ptr=&i;
	char S[20];
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(ptr));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(float *));
	printf("%d\n", sizeof(void *));

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(S));


	return 0;
}
