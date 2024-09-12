#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6

int main()
{
	int arr[MAX] = {1,2,3,4,5,6};
	int arr1[MAX] = {7,8,9,0,1,2};
//	int ar_merge[] = {0};
	int n = sizeof(arr)/sizeof(int);
	int n1 = sizeof(arr1)/sizeof(int);
	int m = MAX + MAX;
	int ar_merge[MAX+MAX] = {0};

	for(int i=0,j=0; i<n,j<n; i++,j++)
	{
		ar_merge[j] = arr[i];
	}
	printf("\n\n");
	printf("The array after inserting 1st arr elements ->\n");
	for(int i=0;i<m;i++)
	{
		printf("%d",ar_merge[i]);
		printf(" ");
	}
	printf("\n");

	for(int i=0,j=n;i<n1,j<m;i++,j++)
	{
		ar_merge[j] = arr1[i];
	}
	
	printf("\n\n");
	printf("The array after inserting 2nd arr1 elements ->\n");
	for(int i=0;i<m;i++)
	{
		printf("%d",ar_merge[i]);
		printf(" ");
	}
	printf("\n");

	return EXIT_SUCCESS;	
}
