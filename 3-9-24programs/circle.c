#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
	int r;
	float area;
	float circum;
	printf("Enter the radius of the circle:\n");
	scanf("%d",&r);
	area = PI*r*r;
	circum = 2*PI*r;
	printf("\nThe area of the circle is %f",area);
	printf("\n\nThe circumference of the circle is %f\n",circum);
	return 0;
}
