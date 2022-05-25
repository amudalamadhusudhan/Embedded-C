//1.program for volume of spere using macro


#include<stdio.h>
#define pi 3.1415
int main()
{
int radius;
printf("enter the radius of spere\n");
scanf("%d",&radius);
double volume=(4.0/3.0)*pi*(radius*radius*radius);
printf("Volume of the sphere=%f\n",volume);
return 0;
}

