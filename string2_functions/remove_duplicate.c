//remove duplicate characters from a string  --->>> VERY IMPORTANT TO UNDERSTAND THE CONCEPT OF PASSING STRINGS AND POINTERS AND ADDRESS!!!!!!

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h> // for str boolean 
# define MAX 50

char* duplicatestr(char [],char []); // declaration
char* duplicatestr(char str1[MAX], char str2[MAX])   //definition
{
    bool seen[256] = {false}; // 256 to cover all the 0-255 ASCII values
    int len = strlen(str1);
    int k=0;
    for(int i=0; str1[i] != '\0'; i++)
    {
        unsigned char c = str1[i]; // stores ascii value of str[i] character
        if(!seen[c])  // not false that is true
        {
            seen[c] = true;
            str2[k] = str1[i];
            k++;
        }
        
    }str2[k] = '\0';
    return str2;
}
int main()          //calling
{
    char str[MAX] = "afddgrs gfffhnss srgnghsaaaaa";
    char sr[MAX];
    puts(str);
    char* r;
    r = duplicatestr(str,sr);
    printf("%s ",r);
	printf("\n");
    return 0;
}


//=================================================================================================================


// to remove only the adjacent duplicate characters in a string
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 50
 
char* duplicatestr(char [],char []); // declaration
char* duplicatestr(char str1[MAX], char str2[MAX])   //definition
{
    int len = strlen(str1);
    int k=0;
    for(int i=0; i<len; i++)
    {
        if(str1[i] != str1[i+1])
        {
            str2[k] = str1[i];
            k++;
        }
    }str2[k] = '\0';
    return str2;
}
int main()          //calling
{
    char str[MAX] = "afddgrs gfffhnss srgnghsa";
    char sr[MAX];
    puts(str);
    char* r;
    r = duplicatestr(str,sr);
    printf("%s ",r);
    return 0;
}
*/
