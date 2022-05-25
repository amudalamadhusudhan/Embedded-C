// 4. program for empolyee details using structures array and pointer concept

#include<stdio.h>
struct employees
{
int id;
char name[100];
char gender[100];
float salary;
};

int main()
{
int i;
struct employees emp[2];
for(i=0;i<2;i++)
{
printf("employees[%d] record details \n",i);
scanf("%d %s %s %f",&emp[i].id,emp[i].name,emp[i].gender,&emp[i].salary);                
}
struct employees *p=emp;
printf("\n");
for(i=0;i<2;i++)
{
printf("view employee [%d] details\n",i);
printf("%d\n",p->id);
printf("%s\n",p->name);
printf("%s\n",p->gender);
printf("%f\n",p->salary);
}
return 0;
}
