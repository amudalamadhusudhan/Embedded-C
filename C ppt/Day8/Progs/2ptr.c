#include<stdio.h> 

int main() 

{ 

	int x,y; 

	int *ptr_p; 

	x = 5; 

	ptr_p = &x; 

	y = *ptr_p; // Returns contents stored at address

	printf("%d\n", y);

	return 0;

 }


