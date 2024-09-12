
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6

/*int main()
{
	int arr[MAX] = {1,2,3,2,1,2};
	//int arr1[MAX] = {7,8,9,0,1,2};
	//int ar_merge[] = {0};
	int n = sizeof(arr)/sizeof(int);
//	int n1 = sizeof(arr1)/sizeof(int);

//============================================================================================================
//         SHIFTING OF INTEGER ARRAY ELEMENTS!!!!!!!!!
	for(int i=0; i<n-1; i++)
	{
		arr[i] = arr[i+1];     -- > DO SORTING FIRST - IF NOT SORTED!!!!!!
	}

	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);     -- >   234566
	}
	printf("\n\n");
	n--;
	
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);     -- >   23456
	}
	printf("\n\n");
	return EXIT_SUCCESS;*/
	
//=============================================================================================================


   /*
    //duplicate delete  -->
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)          // VERY VERY IMPORTANT  --> WRITE FULL SIZE AND NOT "n-1" - FOR DESIRED OUTPUT!
		{
			if(arr[i] == arr[j])
			{
				for(int k=j; k<n-1; k++)     //  --> NEED OF THIRD FOR LOOP FOR DELETING ELEMENT !
				{
					arr[k] = arr[k+1];
				}
				n--;   // --> decreasing size !!!
				j--;    //  --> MOST IMPORTANT STEP !!!!!  -->  doing this coz there can be an any number repeated more than 2 times
			}
		}
	}

	printf("\n\nThe array after deleting duplicates -> \n");
	for(int i=0; i<n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
} */


// 2ND METHOD ------------------------------------------------------------------------------
//in this method sorting is must as it works on adjacent similar elements only !!

	int main()
{
    int a[MAX] = {1,1,3,6,3,6};
    int n = sizeof(a)/sizeof(int);
    int k=0;
    int ans[MAX];
   
	
	//SORTING -->
	int temp=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
		if(a[i] > a[j])
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		}
	} 
	printf("The sorted array is -> \n");
	for(int i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n\n");                      //   --> printing sorted array



    for(int i=0; i<n-1; i++)   //MUST TO DO n-1 !!
    {
        if(a[i]!=a[i+1])
        {
            ans[k] = a[i];
            k++;
        }
    }
    ans[k] = a[n-1];
 
    for(int i=0;i<=k;i++)
        printf("%d ",ans[i]);
 
    return 0;
}




