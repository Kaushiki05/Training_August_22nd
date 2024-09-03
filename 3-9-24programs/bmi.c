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
	return 0;
}

