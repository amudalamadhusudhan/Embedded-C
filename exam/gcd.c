//2. program for GCD 

#include<stdio.h>
int gcd(int x, int y);

int main()
{
  int a,b;
  int result;
  printf("Enter two numbers :\n");
  scanf("%d %d",&a, &b);
  result = gcd(a,b);
  printf("The GCD of %d and %d = %d\n", a, b, result);

  return 0;
}


int gcd(int x, int y)
{
  int hcf;
  int i;
  for( i=1; i<=x && i<=y; i++)
  {
    if(x%i==0 && y%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}
