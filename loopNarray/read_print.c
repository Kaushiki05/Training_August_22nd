#include<stdio.h>
#include<stdlib.h>

int main()
{
	//int arr[] = {1,2,3,4,5,6,7,8};
	int arr[5];
	printf("Enter the elements of array:");
	for(int i=0; i<(sizeof(arr)/sizeof(int)); i++)
	{
		scanf("%d",&arr[i]);           //ERROR - & IS MUST
	}

	printf("\n===============================================\n");
	printf("\nUSING INDEX\tUSING ADDRESS\n");

	for(int i=0; i<(sizeof(arr)/sizeof(int)); i++)
	{
		printf("\t");
		printf("%d",arr[i]);           //ERROR - %D IS MUST
		printf("\t\t\t");
		printf("%d",*(&arr[i]));        //ERROR - %D IS MUST
		printf("\n");
	}
	return EXIT_SUCCESS;
}
