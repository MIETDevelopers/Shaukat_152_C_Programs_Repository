//Purpose:	Check whether a number is a vowel or consonant.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021

#include <stdio.h>	//Preprocessor directive to include standard input output header file

//start of the main body function
int main()
{
	char letter;

	printf("Enter a letter\n");
	scanf("%c",&letter);
	//if condition to whether the letter is a vowel or not.
	if(letter == 'A' || letter ==  'a' || letter == 'E' ||letter ==  'e' ||letter ==  'I' ||letter ==  'i' ||letter ==  'O' || letter == 'o' || letter == 'U' ||letter ==  'u') {
		printf("%c is a vowel",letter);
	}
	else {
		printf("%c is a consonant",letter);
	}
	return 0;	//return statement
}
//end of the main body function