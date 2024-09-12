#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;

	printf("Enter the three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && a>c)
	printf("\nThe largest numbe is %d\n",a);
	else if(b>c && b>a)
	printf("\nThe largest number is %d\n",b);
	else 
	printf("\nThe largest number is %d\n",c);
/*	{
		if(a>c)
			printf("\nThe largest number is %d\n",a);
		else 
			printf("\nThe largest number is %d\n",c);
	}
	else 
	printf("\nThe largest number is %d\n",b);   */
	return 0;
}

