#include<stdio.h> 
void main() 
{
 int x; 
int * ptr_b , * ptr_c, * ptr_d; 
x=5;
ptr_b = &x; 
ptr_c = &x; 
ptr_d = &ptr_b; 

//printf (" %d , %p, %p , %p, %p \n ", x, &x, ptr_b , ptr_c, ptr_d); 
printf (" %p  \n ", &x); 
printf (" %d ,  %d , %d, %p \n ", x,  *ptr_b , *ptr_c, *ptr_d); 
//x=100;
//*ptr_b=100;
//printf (" %d ,  %d , %d, %d \n ", x,  *ptr_b , *ptr_c, *ptr_d); 

//*ptr_c=200;
//printf (" %d ,  %d , %d, %d \n ", x,  *ptr_b , *ptr_c, *ptr_d); 
//printf (" %d , %p, %p , %p, %p \n ", x, &x, ptr_b , ptr_c, ptr_d); 
//printf (" %d , %p, %p , %p, %p  \n ", x, &x, &ptr_b , &ptr_c, &ptr_d); 
}



