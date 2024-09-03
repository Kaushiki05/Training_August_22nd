#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	int k = (a>b)? a:b;
	printf("The maximum number is: %d\n",k);
	return 0;
}
