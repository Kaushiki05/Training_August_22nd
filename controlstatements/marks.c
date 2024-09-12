#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score;
	
	printf("Enter the score from 0-100: ");
	scanf("%d",&score);
	printf("\n");
	
	if(score<=100 && score>=90)
		printf("\nThe grade is A for %d\n",score);

	else if(score<=89 && score>=80)
		printf("\nThe grade is B for %d\n",score);
		
	else if(score<=79 && score>=70)
		printf("\nThe grade is C for %d\n",score);
		
	else if(score<=69 && score>=60)
		printf("\nThe grade is D for %d\n",score);
	
	else if(score<60)
		printf("\nThe grade is F for %d\n",score);

	else 
		printf("Invalid Marks");
	
	return 0;
}







