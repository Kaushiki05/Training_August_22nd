// BUBBLE SORT !!!
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6
/*
int main()
{
	int arr[MAX] = {67,23,77,41,80,52};
	int s = arr[0];
//	int sort_asc[MAX] = {0};
	int n = sizeof(arr)/sizeof(int);
	int temp = 0;

	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("\n\nThe sorted array is -> \n");
	for(int k =0; k<n; k++)
	{
		printf("%d",arr[k]);
		printf(" ");
	}
	printf("\n\n");
	return 	EXIT_SUCCESS;
	
} */

// INSERTION SORT !!!
int main()
{
	int ar[MAX] = {67,23,77,41,80,52};
	int key = 0; 
	int n = sizeof(ar)/sizeof(int);

	for(int i=1; i<n; i++)
	{
		key = ar[i];
		int j=i-1;

		while(j>=0 && ar[j]>key)
		{
			ar[j+1] = ar[j];
			j = j-1;
		}
		ar[j+1] = key;
	}

	printf("\n\nThe sorted array is -> \n");
	for(int k =0; k<n; k++)
	{
		printf("%d",ar[k]);
		printf(" ");
	}
	printf("\n\n");
	return EXIT_SUCCESS;

}
