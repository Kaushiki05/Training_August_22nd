//to sort an array of strings in lexicographic (dictionary) order.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define MAX_length 100
# define STRINGS 5

char lexicographic(char* []); //declaration

//definition
char lexicographic(char *str1[STRINGS])
{
    char lex[MAX_length];
    //input each string/line of array str
    for(int i=0; i<STRINGS; i++)
    {
        str1[i] = (char *)malloc(MAX_length*sizeof(char));
        //error handling
        if(str1[i] == NULL)
        {
            printf("\nError\n");
            return 1;
        }
    }
    //scanf or reading every input from user - for each line
    printf("Enter the words for 2d string: \n");
    for(int i=0; i<STRINGS; i++)
    {
        if(fgets(str1[i],MAX_length,stdin) != NULL) 
        //apple, Angel, banana, Box, CALICO
        {
            int len = strlen(str1[i]);
            if(str1[i][len-1] == '\n')
                str1[i][len-1] == '\0';
        }
    }

    //for printing all our inputs/lines
    printf("\nEntered words are: \n");
    printf("{");
    for(int i=0; i<STRINGS; i++)
    {
        printf("%s ",str1[i]);
        printf(", ");
    }
    printf("}");
    
    //Lexocographic strings by swapping
    for(int i=0;i<STRINGS;i++)
    {
        for(int j=i+1;j<STRINGS;j++)
        {
            if(strcmp(str1[i],str1[j])>0) //comparing ascii values -> if str1[i]>str1[j] -> if true -> enters the loop
            {
                strcpy(lex,str1[i]); //using lex[] as temporary storage like temp
                strcpy(str1[i],str1[j]); //swapping inside the str1 array
                strcpy(str1[j],lex);
            }
        }
    }
    //
    printf("\n\nLexicographic order:\n");
    for(int i=0;i<STRINGS;i++)
        printf("%s",str1[i]);
	printf("\n");    
    
    
    for(int i=0; i<STRINGS; i++)    //free all pointers
    {
        free(str1[i]);
    }
    return EXIT_SUCCESS;
}

//call
void main()
{
    char *str[STRINGS];
    //= {"Apple", "banana", "armed", "Box", "CAT"};
    
    printf("%s", lexicographic(str));
}

