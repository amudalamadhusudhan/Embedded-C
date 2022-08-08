#include <stdio.h> 
int main() 
{ 
	int num[5] ;
 	int i; 
	for(i=0;i<5;i++)
 	{ 
		printf("\n  %d element addr: %p",i,num+i);
		printf("\n Integer Array Element *(num + %d) : %d  ",i,*(num+i));
 	} 

	for(i=0;i<5;i++)
 	{ 
		printf("\n  enter %d element ",i);
		scanf("%d",num+i);
 	} 
	
	for(i=0;i<5;i++)
 	{ 
		printf("\n Integer Array Element *(num + %d) : %d  ",i,*(num+i));
 	} 

return 0;
}

