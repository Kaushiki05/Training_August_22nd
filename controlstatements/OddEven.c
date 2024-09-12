#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d",&a);
	if(a%2 == 0)
		printf("\nThe number %d is even\n",a);
	else 
		printf("\nThe numbe %d is odd\n",a);
	return 0;
}
