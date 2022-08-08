#include<stdio.h> 
int main()
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
		printf("%d and its address is %u ......", a[i][j], &a[i][j]); 
		printf("\n");
		} 
		printf("\n");
	 } 


		printf(" 2d array base address is %u \n", a); 
		printf(" 2d array second element address is %u \n", a+1); 
		printf(" 2d array third element address is %u \n", a+2); 

	
	return 0;

 }

