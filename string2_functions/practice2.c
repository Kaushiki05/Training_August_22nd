//Write a C program to remove from last occurrence of a word in given string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
# define MAX 100
# define n 10

char* rem_last_word(char []);

char* rem_last_word(char str[MAX])
{
    char word[n]; //make word an array and not a character!
    printf("\n Enter the word to be removed: ");
    scanf("%s", word);
    printf("\n");
    while(getchar() != '\n'); //emptied the buffer
    int word_len = strlen(word); //IMPORTANT STEP !!
    
    char* result = NULL; //TO STORE LAST OCCURRENCE OF WORD!
    char* pos = str;
    //int index;
    while((pos = strstr(pos,word)) != NULL) //GIVING POS IN () COZ EVERYTIME WE HV TO LOOP FROM CURRENT POSITION TILL WE REACH THE LAST OCCURRENCE !!
    {
        result = pos; //IT'S ALWAYS STORING LATEST OCCURRENCE UNTIL WE R GETTING THE WORD TILL THE LINE END -> SO IT WILL EXIT LOOP WITH POINTING TO THE LAST OCCURRENCE !!!!
        //printf("%s",result);
        //index = pos-word;
        pos+=word_len;  //POS++ IS ALSO WORKING 
    }
    
    if(result != NULL)  //MOVING CHARACTERS TO LEFT AFTER REMOVING THE WORD USING MEMMOVE !!
    {
        memmove(result, result + word_len, strlen(result + word_len) + 1); //COPIES string with length "strlen(result+wordlen)+1" from result+wordlen position to result position -> here, RESULT points to starting of where the word to be removed starts || RESULT+WORD_LEN points to the end of that word || and it exactly moves result+wordlen + 1 characters to the start of word! coz that's the lenght of word to be removed+'\0' !!
    }
    
    printf("\n The new string is -> \n");
    printf("%s", str);
	printf("\n");
    return (str);
}

void main()
{
    char str1[MAX] = "I am a programmer. I learn at Codeforwin.";
    printf("\n The string is -> \n");
    printf("%s",str1);
    printf("\n");
    
    rem_last_word(str1); //REMEMBER TO ALWAYS GIVE ARGUMENTS!
}
