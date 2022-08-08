#include<stdio.h> 
int main() 
{
	 int x; 
	int *ptr_p; 
	x = 5; 
	printf("%d\n", x); 
	ptr_p = &x; 
	*ptr_p = 10; 
	printf("%d\n", x); 
	return 0; 
}

