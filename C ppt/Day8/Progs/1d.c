#include <stdio.h> 
int main() 
{ 
		int num[5] = {21,18,57,45,50};
 	int i; 
		for(i=0;i<5;i++)
 		{ 
printf("\n Array Element  %d . %d  %d addr.%lu .. %lu",i,num[i],*(num+i),num+i,&num[i]);
 		} 
		/*
     printf("\n Array addr(num) is %p  value is%d  \n ", num, *(num));
     printf("\n num +1 is  %p value is %d \n ", num+1, *(num+1));
     printf("\n num +2 is  %p value is %d \n ", num+2,*(num+2));
     printf("\n num +3 is  %p value is %d \n ", num+3,*(num+3));
     printf("\n num +4 is  %p value is %d \n ", num+4,*(num+4));
     //printf("\n Array[0] addr is %p \n ", &num[0]);*/
		return 0;
 }

