#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int b;
	int c;
	int k;
	printf("Enter the 1st num:\n");
	scanf("%d",&a);
	printf("Enter the 2nd num:\n");
	scanf("%d",&b);
	printf("Enter the 3rd num:\n");
	scanf("%d",&c);
	k = a>b?a>c?a:c:b;
	printf("The maximum number out of three:%d\n",k);
	return 0;
}
