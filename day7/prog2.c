//2. program for initialize pointer

#include<stdio.h>
int main()
{
int *ip,a=10;
//int *ip=&a;
 ip=&a;

printf("address of &*ip =%p\n address of ip =%p\n address of &a=%p\n value of pointer *ip=%d\n",&*ip,ip,&a,*ip);



return 0;


}
