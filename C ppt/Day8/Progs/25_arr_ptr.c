#include<stdio.h>
int main()
{
		int i;
		char *students[]={"Ram", "John", "Abdul"};
		for (i=0; i<3; i++) 
		{
			printf("%c\n", *(students[i]));
		}
return 0;
}
		

