//Write a C program to replace first occurrence of a character with another character in a string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
# define MAX 100

char* replace1st_occurrence(char []); //instead of using char -> use char* SOLVED ALL PROBLEMS

char* replace1st_occurrence(char str1[MAX]) //definiion
{
    char c; // characer to be replaced
    printf("\nEnter the character in the string to be replaced: ");
    scanf("%c",&c);
    printf("\n");
    
    while(getchar() != '\n'); //When you read input from the user using functions like scanf(), it might leave leftover characters in the input buffer. For instance, if the user enters "123abc" and you only read "123", the remaining "abc" is still in the buffer. This can cause issues if you perform further input operations. This line clears those leftover characters until the newline character ('\n') is encountered.
    
    char r; // character by which it is to be replaced
    printf("Enter the character by which it is to be replaced: ");
    scanf("%c",&r);
    printf("\n");
   while(getchar() != '\n');
   
   char *pos = strchr(str1, c);
   //*pos = r; // REPLACING AT POSITION - this also works - directly in 1 line !!
  int index = pos-str1;
  str1[index] = r;
   
   printf("The string after replacing the character: \n");
   return (str1); //AS RETURN TYPE IS CHAR* - CAN PASS STR1 INSTEAD OF STR1[max]
}

void main() // calling
{
    char str[MAX] = "I love programming. I don't know why.";
    
   printf("\nThe string before replacing the character: \n");
    
    printf("%s", str);
    // while(getchar() != '\n');
    printf("\n");
 
    printf("%s",replace1st_occurrence(str));
	printf("\n");
}
