#include<stdio.h>
#include<stdlib.h>
#define minutes 60
int main()
{
	int t_min, i=0;
	printf("Enter the time in minutes: ");
	scanf("%d",&t_min);

	int hr, min;
	if(t_min){
	hr = t_min/minutes;
	min = t_min%minutes;
	i = 1;
	}
	
	switch(i)
	{
		case 1:printf("\nThe time is %d hours and %d minutes\n",hr,min);
			   break;

	    default: printf("\nWrong input\n");
		 		 break;
	}
	return EXIT_SUCCESS;
}
