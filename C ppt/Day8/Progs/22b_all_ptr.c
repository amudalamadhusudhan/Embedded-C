#include <stdio.h>
void main()
{

    char *ptr = "C Program";
    int i;
printf("\n *ptr is %c \n", *ptr );    
printf("\n *(ptr+8) is %c \n", *(ptr+8) );    

for(i=0;i<10;i++)
printf(" %c ",  *(ptr+i));    

}

