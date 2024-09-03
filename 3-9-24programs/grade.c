#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score;
	char grade;
	printf("Enter the score and the grade of the student: \n");
	scanf("%d %c",&score, &grade);
	printf("The score and grade of the student is %d and %c\n",score,grade);
	return EXIT_SUCCESS;
}
