#include <stdio.h>
/* Function Prototype */
//int product(int n1,int n2);
int main()
{
        int num1,num2,p;

        printf("Enter a num1:\n");
        scanf("%d",&num1);

        printf("Enter a num2:\n");
        scanf("%d",&num2);

        p=product(num1,num2);
        printf("prod=%d \n",p);

        return 0;
}

