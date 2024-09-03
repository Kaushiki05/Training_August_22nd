#include<stdio.h>
#include<stdlib.h>

int main()
{
	float temp;
	printf("Enter the temperature in Fahrenheit:\n");
	scanf("%f",&temp);
    float fah_to_cel = (temp - 32.0)*5.0/9.0;
	printf("\nThe temperature in Celsius is: %f\n",fah_to_cel);
	return 0;
}
