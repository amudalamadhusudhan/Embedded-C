//2. program for stucture and union

#include<stdio.h>
struct member{
int i;
char name[100];
};
union mem{
int a;
char n[100];
};
int main()
{
struct member v={10,"madh"};
printf(" struct interger%d\n struct charcter %s\n",v.i,v.name);
union mem v2={10,"madh"};
printf("union interger%d\n union charcter %s\n",v2.a,v2.n);
    printf("\nsizeof structure: %ld\n", sizeof(v));  
    printf("sizeof union: %ld\n", sizeof(v2));  

}
