#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num, round_num, f_sq;
	float sqr_num;
	printf("Enter a number:");
	scanf("%d", &num);

	sqr_num = sqrt(num);
	round_num = round(sqr_num);

	f_sq = round_num*round_num;

	printf("\nThe nearest integer with a whole number square root is %d\n", f_sq);

	return EXIT_SUCCESS;

}
