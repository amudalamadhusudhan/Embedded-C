#include<stdio.h> 
int main() 
{
	 int x; 
	int *ptr_p; 
	x = 5; 
	ptr_p = &x; 
	//*ptr_p = 10; 
	printf("x addr %p\n", &x); 
	printf("ptr_p is %p\n", ptr_p); 
	//x = 10; 
//	*ptr_p = 10; 
//	printf("%d\n", x); 
	return 0; 
}

