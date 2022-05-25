// 1. program for student management system using structures

#include<stdio.h>
struct student
{
int rollnumber;
char name[100];
char gender[100];
float examscore;
};

int main()
{
int i;
struct student stud[5];
for(i=0;i<5;i++)
{
printf("add the student[%d] record details \n",i);
scanf("%d %s %s %f",&stud[i].rollnumber,stud[i].name,stud[i].gender,&stud[i].examscore);                
}
printf("\n");
for(i=0;i<5;i++)
{
printf("view student [%d] details\n",i);
printf("%d\n%s\n%s\n%f\n",stud[i].rollnumber,stud[i].name,stud[i].gender,stud[i].examscore); 
}
int maximumscore,minimumscore;
printf("enter the maximum score\n");
scanf("%d",&maximumscore);
printf("enter the minimum score\n");
scanf("%d",&minimumscore);
for(i=0;i<5;i++)
{
if(stud[i].examscore > maximumscore)
printf("the students [%d] got maximum score = %f\n",i,stud[i].examscore);
}
for(i=0;i<5;i++)
{
if(stud[i].examscore < minimumscore)
printf("the students [%d] got minimum score = %f\n",i,stud[i].examscore);
}



return 0;
}
