#include <stdio.h>

int main()
{
	char letter;

	printf("Enter a letter\n");
	scanf("%c",&letter);

	if(letter == 'A' || letter ==  'a' || letter == 'E' ||letter ==  'e' ||letter ==  'I' ||letter ==  'i' ||letter ==  'O' || letter == 'o' || letter == 'U' ||letter ==  'u') {
		printf("%c is a vowel",letter);
	}
	else {
		printf("%c is a consonant",letter);
	}
	return 0;
}
