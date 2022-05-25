// program for complex numbers

#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complx;

int main()
 {
    complx a,b,c,d;
   
    printf("enter 1st complex number a+ib \n");
    scanf("%f %f", &a.real,&a.imag);

    printf("enter 2nd complex number b+ib \n");
    scanf("%f %f",&b.real,&b.imag);

    c.real=a.real + b.real;
    c.imag=a.imag + b.imag;
    printf("sum=%f +i %f\n",c.real,c.imag);

    d.real=a.real - b.real;
    d.imag=a.imag - b.imag;
    printf("sub=%f -i %f\n",d.real,d.imag);


    return 0;
}
