//Purpose: To create a calculator using switch command and separate functions for each operation.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
float addition(float a,float b);    //declaration of function to perform addition.
float subtraction(float a,float b); //declaration of function to perform subtraction.
float multiplication(float a,float b);  //declaration of function to perform multiplication.
float division(float a,float b);    //declaration of function to perform division.
//Start of the main body function
int main() {
	float n1,n2;
	char input;

    printf("Enter the operation you want to perform(+,-,*,/): ");
	scanf("%c",&input);

	printf("Enter no. 1 : ");
	scanf("%f",&n1);
	printf("Enter no. 2 : ");
	scanf("%f",&n2);

    switch(input) {
        case '+':
            printf("%f + %f = %f",n1,n2,addition(n1,n2));
            break;
        case '-':
            printf("%f - %f = %f",n1,n2,subtraction(n1,n2));
            break;
        case '*':
            printf("%f * %f = %f",n1,n2,multiplication(n1,n2));
            break;
        case '/':
            printf("%f / %f = %f",n1,n2,division(n1,n2));
            break;
        default:
            printf("Choose the right option!");
            break;
    }

	return 0;	//return statement
}
//End of the main body function

float addition(float a,float b) {   //definition of addition function.
    return a+b;
}
float subtraction(float a,float b) {    //definition of subtraction function.
    return a-b;
}
float multiplication(float a,float b) {     //definition of multiplication function.
    return a*b;
}
float division(float a,float b) {       //definition of division function.
    return a/b;
}