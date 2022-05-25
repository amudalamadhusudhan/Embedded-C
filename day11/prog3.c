//3. program for constant 


#include <stdio.h>
#define R 10
#define PI  3.14
#define NEWLINE '\n'
int main()
{
int area;
const int r = 10;
const float pi = 3.14; 
const char nl='\n';
area = 2*pi*r;
//pi=pi+0.1; // we cant change value
printf("area : %d\n", area);
//nl='b'; we cant chage value
  printf("%c", nl);

/////////////////////////
int ar; 
ar = 2*PI*R;
printf("area : %d", ar);
printf("%c", NEWLINE);

return 0;
}
