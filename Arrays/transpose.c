#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#define row 3
#define col 3

int main()
{
	int ar[row][col] = {{1,3,67},{45,23,85},{7,9,2}};
	int ar1[col][row];
//	int n_row = sizeof(ar)/sizeof(int);
//	int n_col = sizeof(ar[0])/sizeof(int);
//	int temp=0;


	printf("\nThe 2D array ->\n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d", ar[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n\n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			ar1[j][i] = ar[i][j];
		}
	}

	printf("\nThe array after the transpose: \n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d", ar1[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("\n");

	return EXIT_SUCCESS;


	
}
