#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#define MAX 6

int main()
{
	int arr[MAX] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	int index=-1;
	
	int x;
	printf("\nEnter the number to search: ");
	scanf("%d",&x);

	for (int i=0; i<n; i++)
	{
		if(x == arr[i]){
			index = i;
//			break;      -> NOT NECESSARY
		}
	}

	if(index != -1)
		printf("\n\nThe number %d is found at index %d\n\n", x,index);
	
	else
		printf("\nERROR! The number doesn't exists.\n\n");

	return EXIT_SUCCESS;
}
