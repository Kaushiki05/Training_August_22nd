// FOR ALL TYPES OF ANAGRAMS WHETHER IT'S ONE WORD OR MULTIPLE AND WITH AND WITHOUT SPECIAL CHARS N NUMBERS
// check if two strings are anagrams of each other -> THIS PROGRAM WORKS FOR EVERY ANAGRAMS - WITH SPACE OR SPECIAL CHAR OR NUMBERS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h> 
#include<ctype.h>   
# define MAX 50

int check_anagram(char *,char *); 

int check_anagram(char *str1, char *str2) 
{
    char *str1_alpha = str1;
    char *str2_alpha = str2;
    int freq1[256] = {0}; 
    int freq2[256] = {0}; 
    
    //storing in frequency array and checking for special chars
    for(int i=0; str1_alpha[i]!='\0'; i++)
    //for(int i=0; i<256; i++)
    {
        if(isalpha(str1_alpha[i]))
        {
            freq1[tolower(str1_alpha[i])]++;
        }
       // str1_alpha++;  -->> no need coz we r using for loop
    }
    for(int i=0; str2_alpha[i]!='\0'; i++)
    //for(int i=0; i<256; i++)    -->> THIS LINE IS NOT WORKING !!!!!! - coz it can go out of bound !!
    {
        if(isalpha(str2_alpha[i]))
        {
            freq2[tolower(str2_alpha[i])]++;
        }
       // str2_alpha++;
    }
    
    //compare frequncies
    for(int i=0; i<256; i++) //here i<size -> size should be equal to freq[size] !!!!!!
    {
        if(freq1[i] != freq2[i])
        {
            printf("\nNot Anagram\n");
            return EXIT_FAILURE;
        }
    }
    printf("\nAnagram\n");
    return EXIT_SUCCESS;
  
}

int main()
{
    char str_1[MAX] = "Astronomer";
    char str_2[MAX] = "Moon starer";
    //"The Morse Code" and "Here come dots"
    
    int result;
    result = check_anagram(str_1,str_2);
    return result;
}

//==============================================================================================================================
/*
//check if two strings are anagrams of each other.  (ONLY FOR ONE WORD ANAGRAMS !!!)

//convert to lower case and remove all the special chars and numbers, then sort both the strings, then compare or count the occurence of each and compare them !!

// check if two strings are anagrams of each other -> THIS PROGRAM WORKS FOR ONLY ONE WORD ANAGRAMS - WITHOUT ANY SPACE OR SPECIAL CHAR
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>  //for bool, true, false
#include<ctype.h>   //for isalpha/isalnum
# define MAX 50

int check_anagram(char *,char *); // int - coz we are returning exit_success n failure - means 0 n 1

int check_anagram(char *str1, char *str2) //
{
    //char *str1_alpha = str1;
    //char *str2_alpha = str2;
    int freq1[256] = {0}; // int - not char !!

    int freq2[256] = {0}; //256 - coz we are going to use positive chars in str (coz of isalpha) - which is only between 0-255 and str elements are taken as index in freq srray
    while(*str1)
    {
        if(isalpha((unsigned char)*str1)) //isalpha takes int input - so writing unsigned to make sure that the character's ascii value is positive - as isalpha only take positive int
        {
            //*str1_alpha++ = *str1;
            freq1[(unsigned char) *str1]++;
        }
        str1++; //incrementing pointer to go to next character
    } //*str1_alpha = '\0';

    while(*str2) // str2 is a pointing to a string's 1st char stored at a memory loc and *str2 means we r accessing the char stored there and once it encountered '\0' then while loop becomes false
    {
        if(isalpha((unsigned char)*str2))
        {
           // *str2_alpha++ = *str2;
           freq2[(unsigned char) *str2]++;
        }
        str2++;
    } //*str2_alpha = '\0';

    //compare
    for(int i=0; i<256; i++) //instead of using 256 -> can use ASCII_SIZE
    {
        if(freq1[i] != freq2[i]) // this is must coz even if one char not matches then its not an anagram but if u put == condition then if only the 1st char are equal -> it will print anagram -> ignoring the rest of the elements
        {
            printf("\nNot Anagram\n");
            return EXIT_FAILURE;
        }
    }

    printf("\nAnagram\n");
    return EXIT_SUCCESS;


    //free(freq1);
    //free(freq2);
}

int main()
{
    char str_1[MAX] = "listen";
    char str_2[MAX] = "silent";

    int result;
    result = check_anagram(str_1,str_2);
    return result;
}*/
