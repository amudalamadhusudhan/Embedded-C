#include<stdio.h>

//Function prototype
//void print(float a[][]); //Error or Warning???
void print(float a[][3], int, int); //Error or warning???

int main()
{
	float a[2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};

// Calling function print
	print(a, 2, 3);

	return 0;
}	

//void print(float a[][3], int m, int n)
//void print(float a[][], int m, int n) //Correct or Warning or Error ???
//void print(float a[2][], int m, int n)
{
	int i, j;

	for(i=0; i<=m-1; i++)
	{
		printf("\n");

		for(j=0; j<=n-1; j++)
			printf("%f\t", a[i][j]);
	}
	printf("\n");
	printf("\n");
}		
