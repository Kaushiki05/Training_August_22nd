#include<stdio.h>
#include<stdlib.h>
int main()
{
	int integer;
	printf("Enter any positive number: ");
	scanf("%d",&integer);

	int sum=0;
	while(integer>0)
	{
		sum = sum + (integer%10);
		integer = integer/10;
	}
	printf("\n\nThe sum is %d", sum);
	printf("\n\n");
	return EXIT_SUCCESS;
}
