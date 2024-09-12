#include<stdio.h>
#include<stdlib.h>
#define DAY 7
int main()
{
	int n_day;
	printf("Enter the number of days: ");
	scanf("%d",&n_day);

	int days, weeks;
 	int i=0;

	if(n_day)
	{
		days = n_day%DAY;
		weeks = n_day/DAY;
		i = 1;
	}

	switch(i)
	{
		case 1: printf("\n%d days have %d weeks and %d days\n",n_day,weeks,days);
				break;

		default: printf("\nWrong input\n");
				 break;
	}
	return EXIT_SUCCESS;
}

