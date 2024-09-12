#include<stdio.h>
#include<stdlib.h>
int main()
{
	char charac;
	printf("Enter a character: ");
	scanf("%c",&charac);

	char result;
	if(charac == 'a' || charac == 'A' || charac == 'e' || charac == 'E' || charac == 'i' || charac == 'I' || charac == 'o' || charac == 'O' || charac == 'u' || charac == 'U')
		result = 'v';
	else 
		result = 'C';

	switch(result)
	{
		case 'v': printf("The character is a vowel\n");
				  break;

		case 'C': printf("The character is a consonant\n");
				  break;

		default: printf("The character is invalid\n");
				 break;
	}
	return EXIT_SUCCESS;

}
