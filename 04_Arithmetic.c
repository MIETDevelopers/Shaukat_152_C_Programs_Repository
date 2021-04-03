//Purpose: Perform arithmetic operations on two numbers
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//start of the main body function
int main() {
	float n1,n2;
	char choice;
	
	printf("Choose an operation +,-,*,/");
	scanf("%c",&choice);
	
	printf("Enter numbers ");
	scanf("%f %f",&n1,&n2);
	
	//switch statement to choose the desired arithmetic operation
	switch(choice) {
		case '+':
			printf("Sum of the two numbers is: %f\n",n1+n2);
			break;

		case '-':
			printf("Difference of the two numbers is: %f\n",n1-n2);
			break;

		case '*':
			printf("Product of the two numbers is: %f\n",n1*n2);
			break;

		case '/':
			printf("Quotient of the two numbers is: %f\n",n1/n2);
			break;

		default:
			printf("ERROR!");
			break;
	}
	return 0;	//return statement
}
//end of the main body function