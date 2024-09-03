#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int b = 4;
	int ret_val;
	int ret_va;
	printf("Enter 2 integers\n");
	ret_va = scanf("%d %d",&a,&b);
	printf("No. of inputs = %d\n", ret_va);


	ret_val = printf("The sum of %d and %d is %d\n",a,b,a+b);
//	printf("The number of characters printed are: %d\n",ret_val);
	if (ret_val < 0){

		printf("error while printing\n");
		return EXIT_FAILURE;
	}
	printf("It's success\n\n");
	return EXIT_SUCCESS;
	
}
