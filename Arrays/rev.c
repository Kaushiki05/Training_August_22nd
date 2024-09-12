#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6

int main()
{
	int arr[MAX] = {1,2,3,4,5,6};
	int rev[MAX] = {0};
	int n = sizeof(arr)/sizeof(int);
	int k = sizeof(rev)/sizeof(int);

	for (int i=0,j=k-1; i<n,j>=0; i++,j--)
	{
		rev[j] = arr[i];
	}

	printf("\nThe array rev is -> ");
	printf("\n{");

	for (int j=0;j<k;j++)
	{
		printf("%d",rev[j]);
		printf(" ");
	}

	printf("}");
	printf("\n\n");

	return EXIT_SUCCESS;
}
