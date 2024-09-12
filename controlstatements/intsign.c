#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d",&a);

	int category;
	if(a>0)
		category = 1;
	else if(a<0)
		category = -1;
	else 
		category = 0;

/*	printf("\n1. to check if it is positive\n");
	printf("2. to check if it is negative\n");
	printf("3. to check if the number is zero\n");   */

	switch(category)
	{
		case 1:	printf("The number is positive\n");
				break;

		case -1:printf("The number is negative\n");
				break;

		case 0:printf("The number is zero\n");
				break;

		default: printf("The number is invalid\n");
				break;
	}
	return 0;
}
