#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[6] = {2,6,12,8,54,7};
	int sum=0;
	float avg =0;
	int n = sizeof(arr)/sizeof(int);

	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}

	avg = (float)sum/n;

	printf("\nThe sum is %d",sum);
	printf("\n");
	printf("The average is %f",avg);
	printf("\n");

	return EXIT_SUCCESS;
}
