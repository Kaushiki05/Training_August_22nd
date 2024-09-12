#include<stdio.h>
#include<stdlib.h>
#define MAX 8
/*
int main()
{
	int arr[MAX] = {1,1,2,3,4,1,4};
	int n = sizeof(arr)/sizeof(int);
	int count = 0;

	printf("\nThe array is -> ");
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");

	int search =0;
//	for(int i=0; i<n; i++)
	int i=0;
	while(i<n)
	{
		search = arr[i];
		for(int j=0; j<n; j++)
		{
			if(search == arr[j])
			{
				count+=1;
			}
		}i++;
		printf("\nThe occurence of %d is %d ",arr[i],count);
	}
	return EXIT_SUCCESS;		
}*/


int main() {
    int arr[MAX] = {1,1,4,2,2,3,2,3};
    int n = sizeof(arr)/sizeof(int);
    int count[MAX] = {0};  //SIZE IS MUST AND IMPORTANT !!!!!

    printf("\nThe array is ->\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {

        count[arr[i]]++;
    }

    for(int i=0; i<5; i++)  //PROVIDE THE MAXIMUM SIZE - WHICH IS THE MAXIMUM NUMBER IN THE ARRAY - "arr" -> for this calculate the maximun number of the arr
    {
        if(count[i] != 0) //ALSO IMPORTANT
        printf("\nThe occurrence of %d is %d\n",i,count[i]);
    }

    return EXIT_SUCCESS;
}
