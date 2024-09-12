#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#define MAX 6

int main()
{
	int ar[MAX] = {1,3,67,45,23,85};
	int n = sizeof(ar)/sizeof(int);
	int temp=0;

	
	for(int j=0; j<n; j++)          // SORTING !!!1111
	{
	for(int i=j+1 ;i<n; i++)
	{
		if(ar[j] > ar[i])
		{
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
		}
	}
	}

	printf("\nThe sorted array ->\n");
	for(int i=0; i<n; i++)
	{
		printf("%d", ar[i]);
		printf(" ");
	}
	printf("\n\n");

	printf("The second largest number of the array is: %d\n",ar[n-2]);

	return EXIT_SUCCESS;


	
}
