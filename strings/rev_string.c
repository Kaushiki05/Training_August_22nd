//for reversing strings letter by letter but can also reverse the whole line with each word and character reversed!!
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 30

int main()
{
	char str[MAX] = "abcdefgh oiuyfdxg";    //no need of '\0'
	int n = strlen(str);
	puts(str);       //this prints \n after printing the string
	char str_rev[MAX];
//	size_t length = 0;

	strncpy(str_rev,str,n+1);

/*	printf("Enter the substring to be searched:\n ");
	fgets(str_search, MAX, stdin);

	size_t length = strlen(*str_search);
	if(str_search[length-1] == '\n')
		str_search[length-1] = '\0';  */

/*	for(int i=n-1,j=0; i>=0,j<n; i--,j++)                --> THIS DOESN'T WORK WITH STRINGS AND ONLY WITH OTHER DATATYPES ARRAYS !
	{
		str_rev[j] = str[i];
	}   */ 

	int temp =0;
	for(int i=0; i<(n/2); i++)     // -> swapping the elements from end to the first -> the loop is from 0 to mid, that is, n\2
	{
		temp = str_rev[i];
		str_rev[i] = str_rev[n - i - 1];
		str_rev[n - i - 1] = temp;
	}


	printf("\nThe reversed array is ->\n");
	puts(str_rev);
	
/*	*pos = *strstr(str, str_search);
	printf("%s",pos);  */

	printf("\n");


	return EXIT_SUCCESS;
}

