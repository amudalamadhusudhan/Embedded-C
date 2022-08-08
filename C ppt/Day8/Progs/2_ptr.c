#include<stdio.h> 
int main() 
{ 
	int x=10; 
	int *ptr_p; 
	ptr_p = &x; 
	*ptr_p=5; // ptr_p address location value is changed to 5 
	printf("%d\n", x);
	return 0;
 }

