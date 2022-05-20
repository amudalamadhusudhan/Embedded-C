//7.program for simple interest

#include<stdio.h>  
int main()   
{   
float P,R,T,SI;

printf("enter the values\n");
scanf("%f%f%f",&P,&T,&R);  

SI =(P*R*T)/100;
    
printf("simple interest is:%f\n",SI);  
 return (0);  
}  
