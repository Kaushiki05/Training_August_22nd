#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#define MAX 6

int main()
{
	int ar[MAX];
	int n = sizeof(ar)/sizeof(int);
	int ar1[MAX] = {0};
	int n1 = sizeof(ar1)/sizeof(int);
	int temp = -1;

	printf("\nEnter the elements of array: ");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\n\n");

	printf("The array entered is: \n");
	for(int i=0; i<n; i++)
	{
		printf("%d",ar[i]);
		printf(" ");
	}
	printf("\n\n");

	printf("The array is reversed: \n");
	for(int i=0,j=n1-1; i<n,j>=0; i++,j--)
	{
		ar1[j] = ar[i];
//		printf("%d",ar1[j]);
//		printf(" ");
	}

	for(int i=0; i<n1; i++)
	{
		printf("%d", ar1[i]);
		printf(" ");
	}
	printf("\n\n");

	for(int i=0,j=0; i<n,j<n1; i++,j++)              //CHECKING ALL THE ELEMENTS OF AR AND AR1 ONE BY ONE
	{
		if(ar[i] != ar1[j])
		{
			temp = 0;
			break;
		}
	}
	if(temp == -1)
		printf("\nThe array is palindrome.\n");
	else 
		printf("\nNot plaindrome.\n");
	
}
