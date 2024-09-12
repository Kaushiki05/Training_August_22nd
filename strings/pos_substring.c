#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 30

int main()
{
	char str[] = "abcdefgh oiuyfdxg";    //no need of '\0'
	int n = strlen(str);
	puts(str);       //this prints \n after printing the string    -->   abcdefgh oiuyfdxg
	char str_search[MAX];          // --> substring to be searched
//	size_t length = 0;
//	char *pos;


	printf("Enter the substring to be searched:\n ");
	fgets(str_search, MAX-1, stdin);                // taking input the substring that needs to be searched

	size_t length = strlen(str_search);         // substring size using size_t when u don't know the data type
	if(str_search[length-1] == '\n')            // MUST CONDITION!!! -> when u used the fgets()
		str_search[length-1] = '\0';
/*
	else 
	{
		printf("\nError\n");
	}  */
	
	char *pos = strstr(str, str_search);            //using strstr() for searching the first occurrence of the substring u entered
	printf("%s",pos);   // -> printing the whole string starting from the substring to be searched - coz pos is returning pointer to the 1st substring

	if(pos != NULL)                 //  --> MUST CONDITION !!!!
		printf("\nfound at index: %ld\n",pos - str);     // VERY IMPORTANT !!!! -> LONG DOUBLE -> can also use - %lu (*pos - *str)
	else
		printf("\nNot found!\n");
	return 0;     // OR exit_success;

/*	int count =0; // for storing index where the substring was found !
	for(int i = 0,j = 0; i<n,j<length; i++,j++)    //searching for substring
	{
		if(str[i] == str_search[j])
		{
		//	count+=1;
			count = i;
			break;
		}
	}  */

	printf("\n\n");
/*	if(pos)
	{
		int index = pos - str;
	}
	else  printf("substring not found");

//	printf("The substring %s was found at index %d\n", str_search);
	printf("\n");   */


//	return EXIT_SUCCESS;
}

