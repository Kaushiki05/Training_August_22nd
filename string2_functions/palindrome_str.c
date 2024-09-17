//string is a palindrome or not !

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>  //for bool, true, false
#include<ctype.h>   //for isalpha/isalnum
# define MAX 50
bool palindrome_str(char []);

bool palindrome_str(char str[])
/*
{
    //char *str_copy = *str;
    int len = strlen(str);
    char str2[MAX] = {0};
    int j=0;
    //strncpy(str2, str, MAX - 1);
    //str2[MAX - 1] = '\0';
 
    for(int i=0; i<len; i++)
    {
        str_low[i] = tolower(str[i]); 
    }*/
  /*  for(int i=0; i<len; i++)
    {
        str2[j++] = str[i]; //original string is stored in str2
    }
    str2[j] = '\0';
    int str2len = strlen(str2);
   
    int temp =0;
    //reverse string ->
 
    for(int i=0; i<str2len/2; i++)
    {
        temp = str2[i];
        str2[i] = str2[len-i-1];
        str2[len-i-1] = temp;
    }
    //comparing ->
    for(int i=0;i<len;i++)
    {
        if(str2[i] != str[i])
        {
            printf("\nNot Palindrome\n");
            return EXIT_FAILURE;
        }
    }
    printf("\nPalindrome\n");
    return EXIT_SUCCESS;
}
*/
{
    int len = strlen(str);
    for(int i=0, j=len-1; i<j; i++,j--) //ofc i<j and not i<len or j>=0 coz we don't want to loop the whole string - we just want to go half from both sides and compare !
    {
        while (i < j && !isalnum(str[i])) i++; // these 2 conditions are IMPORTANT - coz spaces and null characters are to be removed as they r not included in palindromes
        while (i < j && !isalnum(str[j])) j--;   //if there is a special char instead of number or char then just increment by 1 - without doing anything 
            if(tolower(str[i]) != tolower(str[j]))
            {
                return false;
            }
    }
    return true;
}

void main()
{
    char str1[MAX] = "A man a plan a canal Panama";
    if(palindrome_str(str1))
        printf("\nPalindrome\n");
    else
        printf("\nNot Palindrome\n");
}
