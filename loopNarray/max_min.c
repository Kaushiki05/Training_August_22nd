#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5] = {11,2,53,64,5};
//	int num=a[0];
	int max=a[0],min=a[0];
	for(int i=1; i<(sizeof(a)/sizeof(int)); i++)
	{
		if(a[i]>max)
			max=a[i];
	}

	for(int i=1; i<(sizeof(a)/sizeof(int)); i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("Max number is %d",max);
	printf("\n");
	printf("Min number is %d",min);
	printf("\n");
}
