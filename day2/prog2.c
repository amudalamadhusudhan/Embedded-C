//2.program for bitwise operators

#include<stdio.h>
int main()
{
int a=0,b,ONES,SR,SL;
int AND,OR,EXOR;
printf("enter the two numbers:\n");
scanf("%d%d",&a,&b);
AND=(a&b); // a=0010 , b=0101 AND= 0000
OR=(a|b); //a=0010 , b=0101 OR = 0111 
EXOR=(a^b);// a=0010 , b= 0101 exor =0111
ONES=~a;  //  a=0010 , 1s complement =1101
SR=a>>2; // a=0010 , right shifted = 0000
SL=a<<2;// a=0010, left shifted =1000
printf("output of AND operator is:%d\n",AND);
printf("output of OR operator is:%d\n",OR);
printf("output of EXOR operator is:%d\n",EXOR);
printf("output of shifright operator is:%d\n",SR);
printf("output of shiftleft operator is:%d\n",SL);
printf("output of ons complement is:%d\n",ONES);
return 0;
}

