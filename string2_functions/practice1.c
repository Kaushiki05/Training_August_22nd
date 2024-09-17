//You are given a string, str. You need to find the score of str as per the following rules: 1) For each palindrome of length 4 in str, add 5 to the score, 2) For each palindrome of length 5 in str, add 10 to the score.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 50
//# define name_len 20

int main()
{
    char str[MAX];
    int n;
    int score=0;
    
    printf("Enter length of string: ");
    scanf("%d",&n);
    while(getchar() != '\n');
    
    printf("Enter a string: ");
    for(int i=0;i<n;i++)
        scanf("%c", &str[i]);  //abcccbef
    while(getchar() != '\n');
        
    for(int i=0; i<=n-4; i++)
    {
        char temp[4];
        for(int j=i;j<i+4;j++)
            temp[j-i] = str[j];
        
        char rev[4];
        rev[4] = '\0';
        for(int i=3;i>=0;i--)
            rev[3-i] = temp[i];
            
        int flag=0;
        for(int i=0;i<4;i++)
        {
            if(rev[i] != temp[i])
                flag =1;
        }
        
        if(flag == 0){
            score+=5;
            printf("%s",rev);}
    }
    
    for(int i=0; i<=n-5; i++)
    {
        char temp[5];
        
        for(int j=i;j<i+5;j++)
            temp[j-i] = str[j];
        
        char rev[5];
        rev[5] = '\0';
        for(int i=4;i>=0;i--)
            rev[4-i] = temp[i];
            
        int flag=0;
        for(int i=0;i<5;i++)
        {
            if(rev[i] != temp[i])
                flag =1;
        }
        if(flag == 0){
            score+=10;
            printf("%s",rev);}
    }
    printf("\nscore is %d", score);
    return 0;
}

//=============================================================================================================

//2nd method --> CHAT GPT !!!!!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int is_palindrome(char *str, int length) {
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char str[MAX];
    int n;
    int score = 0;

    // Input length of the string
    printf("Enter length of string: ");
    scanf("%d", &n);
    while (getchar() != '\n'); // Clear the newline character from buffer

    // Input the string
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    // Check for palindromes of length 4
    for (int i = 0; i <= n - 4; i++) {
        char temp[5];
        strncpy(temp, str + i, 4);
        temp[4] = '\0'; // Null-terminate the substring

        if (is_palindrome(temp, 4)) {
            score += 5;
            printf("%s", temp);
        }
    }

    // Check for palindromes of length 5
    for (int i = 0; i <= n - 5; i++) {
        char temp[6];
        strncpy(temp, str + i, 5);
        temp[5] = '\0'; // Null-terminate the substring

        if (is_palindrome(temp, 5)) {
            score += 10;
            printf("%s", temp);
        }
    }

    printf("\nscore is %d\n", score);
    return 0;
}

