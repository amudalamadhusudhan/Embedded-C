#include <stdio.h>
/* Function Prototype */
int product(int n1,int n2);
int main()
{
        int l,w,area;

        printf("Enter length:\n");
        scanf("%d",&l);

        printf("Enter width:\n");
        scanf("%d",&w);

        area=product(l,w);
        printf("area=%d \n",area);
        return 0;
}

