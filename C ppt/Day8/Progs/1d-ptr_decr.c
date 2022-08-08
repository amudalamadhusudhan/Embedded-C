#include <stdio.h> 
int main() 
{ 
		int num[5] = {21,18,57,45,50};
 		int i; 
		int *iptr=num+4;
		for(i=0;i<5;i++)
 		{ 
	printf("num : %d  addr: %u\n",*iptr,iptr);
			iptr--;
 		} 
		return 0;
 }

