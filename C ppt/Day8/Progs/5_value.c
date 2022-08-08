#include<stdio.h>

void swapping(int,int);

void swapping(int c, int d)
 { 
	int tmp; 
	printf("In function before swapping : %d %d\n", c , d); 
	tmp = c;  
	c = d; 
	d = tmp; 
	printf("In function: %d %d\n", c , d); 
}
void main( ) 
{	 int a,b;
	 a=5; b=10;
	 printf("input: %d %d\n", a, b); 
	swapping(a,b); 
	printf("output: %d %d\n", a, b); 
}

