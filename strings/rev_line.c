/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 30

int main()
{
	char str = "abcdefgh oiuyfdxg";    //no need of '\0'
	int n = strlen(str);
	puts(str);       //this prints \n after printing the string
	char str_search[MAX];
//	size_t length = 0;
	
	printf("\n");


	return EXIT_SUCCESS;
}*/





//reverse a line without reversing the characters of word

#include <stdio.h> 
#include<stdlib.h>
#include<string.h>
# define MAX 100
# define MAX_length 50
int main()
{
    char *words[MAX_length]; //introduced as an array of pointers to hold words and not a simple array of characters
    int word_count = 0;
    char *token; //must to declare - always char* !!
    char str[MAX] = "My name is Kaushiki Singh";
    printf("The given string is ->\n");
    puts(str);
    token = strtok(str," ");
    while(token != NULL && word_count<MAX_length)
    {
        words[word_count++] = token; //will work only if words[] is a pointer array and not the simple char array - coz we r assigning a pointer to a pointer array !! lhs=rhs -> char* = char* ->or there will be segmentation fault !
        token = strtok(NULL," ");
    }
    //puts(words);
    printf("The reversed string line ->\n");
    for(int i=word_count-1; i>=0; i--)
    {
        printf("%s ",words[i]); //use %s for strings and 'i' instead of 'word_count'
    }
    printf("\n\n");
    return EXIT_SUCCESS;
}
