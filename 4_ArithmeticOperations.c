#include <stdio.h>
int main() {
	float n1,n2;
	char choice;
	
	printf("Choose an operation +,-,*,/");
	scanf("%c",&choice);
	
	printf("Enter numbers ");
	scanf("%f %f",&n1,&n2);
	
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
	return 0;
}