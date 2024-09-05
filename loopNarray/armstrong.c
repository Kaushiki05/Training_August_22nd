#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);

	int n = num, i, count=0, k =num;
	while(n)
	{
		n = n/10;
		count++;
//		i = count;
	}                   //ONCE ENTERED THE LOOP - THE VALUE ALWAYS CHANGES AFTER EXITING THE LOOP - SO MUST HAVE IT STORED SOMEWHERE
	
	int arm=0, r;

	while(k)
	{
		r = k%10;
		arm = arm + (pow(r,count));
		k=k/10;
	}
	
	if(num == arm)
		printf("\n\nThe number is armstrong\n");
	else 
		printf("\nNot arsmtrong\n\n");
	return EXIT_SUCCESS;
}
