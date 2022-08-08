//============================================================
// Changes made to array in function will be reflected in main
//============================================================

#include<stdio.h>
void display(int [], int);
int main()
{
	int arr[3]={0,1,2};
	int i;

//Print in function 
	display(arr, 3);

	printf("In main\n");
	for(i=0; i<=2; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

void display(int arr[], int n)
{
	int i;
	printf("In display function\n");

	for(i=0; i<n; i++)
	{
		arr[i]=2*i;
		printf("%d\n", arr[i]);
	}

	return;
}
