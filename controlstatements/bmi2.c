
#include<stdio.h>
int main()
{
    float weight;
	float height;
	printf("Enter the weight in kg: \n");
	scanf("%f",&weight);
	printf("Enter the height in meters: \n");
	scanf("%f",&height);
	float bmi = weight/(height*height);
	printf("The BMI of the user is: %f\n",bmi);
	if(bmi<18.5)
		printf("Underweight\n");
	else if(bmi>=18.5 && bmi<=24.9)
		printf("Normal weight\n");
	else if(bmi<=25 && bmi>=29.9)
		printf("Overweight\n");
	else if(bmi>=30)
		printf("Obesity\n");
	return 0;
}

