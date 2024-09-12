#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter any two numbers: ");
	scanf("%d %d",&a, &b);

	char op;

	printf("\n1. For Addition enter '+'\n");
	printf("2. For Subtraction enter '-'\n");
	printf("3. For Multiplication enter '*'\n");
	printf("4. For Division enter '/'\n");
	printf("Enter your choice (+,-,*,/): \n");

	scanf(" ");
	scanf("%c",&op); //THIS LINE VERY IMPORTANT !!!!!!!!!!!!1

	switch(op)
	{
	case '+':
//	if(op == '+')
		printf("The sum of %d and %d is %d\n",a,b,a+b);
		break;

	case '-':
//	if(op == '-')
	 	printf("\nThe difference of %d and %d is %d\n",a,b,a-b);
		break;

	case '*':
//	if(op == '*')
	 	printf("\nThe product of %d and %d is %d\n",a,b,a*b);
		break;

	case '/':
//	if(op == '/')
		printf("\nThe quotient of %d and %d is %d\n",a,b,a/b);  // IMPORTANT - PUT a, b and a/b SEPARATELY!!!!!!!!
		break;  //ALSO DON'T USE %f BUT USE %d -> FOR CORRECT ANSWER!!!!!!!!1

	default:printf("wrong input\n");
		   break;
	}
	return EXIT_SUCCESS;
	
}
