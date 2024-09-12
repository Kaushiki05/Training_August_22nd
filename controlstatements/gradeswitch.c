#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float perc;
	
	printf("Enter the marks from 0-100: ");
	scanf("%f",&perc);

	int marks = (int)perc;  //ERRORR !!!!! -> when using (int)round(perc) ?

	char grade;
	if(marks >= 90 && marks <= 100)
		grade = 'A';
	else if(marks >=80 && marks<90)
		grade = 'B';
	else if(marks>=70 && marks <80)
		grade = 'C';
	else if(marks >=60 && marks <70)
		grade = 'D';
	else 
		grade = 'F';

//	printf("\n =====================================\n");

	switch(grade)
	{
		case 'A': printf("The grade is A\n");
				break;

		case 'B': printf("The grade is B\n");
				break;

		case 'C': printf("The grade is C\n");
				break;

		case 'D': printf("The grade is D\n");
				break;

		case 'F': printf("The grade is F\n");
				break;

		default: printf("Wrong Input\n");
				break;
	}
	return EXIT_SUCCESS;
}

