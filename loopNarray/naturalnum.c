#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10];
	int n = sizeof(arr)/sizeof(int);
//	int num = 1;
	for(int i=0,num=1; i<n,num<=n; i++,num++)
	{
		arr[i] = num;
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("\n");
	return EXIT_SUCCESS;
}
