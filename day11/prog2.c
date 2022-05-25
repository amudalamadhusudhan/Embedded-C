// 2. program for the storage classes

#include<stdio.h>
void increment();
void staticin();
void regis();
int main()
{
increment();
increment();
increment();
//////////////////////////////////////
staticin();
staticin();
staticin();
////////////////////////////////////
int x;
extern int y;
printf("\nx=%d\n",x);
printf("\ny=%d\n",y);// defualt value y is 0
////////////////////////////////////////
 
	regis(); 
	regis();
	regis();
 

return 0;
}
///////////////////////////////////auto storage class
void increment()
{
auto int a=0;  // life of a is live with in function 
a++;
printf("\na=%d\n",a);
}
////////////////////////////////////static storage class
void staticin()
{
static int a; 
 a++;                // life of a is alive till program end
printf("\na=%d\n",a);
}
/////////////////////////////////// register storage class
void regis() 
{
register int count = 0;
count++;                   // life as same as auto value is store in register
printf("\ncount is %d\n", count); 
} 
//////////////////////////////////extren storage class
y=10;
x=10;      // life of y is alive till program end  and check with x









