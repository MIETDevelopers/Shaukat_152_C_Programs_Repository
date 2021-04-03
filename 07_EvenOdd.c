//Purpose: Program to check whether a number is even or odd.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file

//start of the main body function
int main()
{	
	int n;

	scanf("%d",&n);

	//if condition to check whether a number is completely divisible by 2.
	if(n%2==0) {
		printf("Number is even.");
	}
	else {
		printf("Number is odd.");
	}

	return 0;	//return statement
}
//end of the main body function
