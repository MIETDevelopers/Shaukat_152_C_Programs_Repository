//Purpose: Calculate sum of digits of a number using while loop.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//start of the main body function
int main() {
    int n,sum=0,lastdigit;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0) {
        lastdigit = n%10; //this statement gets us the last digit of the number.
        sum = sum + lastdigit;
        n = n/10;   //this statement removes the last digit of the number.
    }
    printf("Sum = %d",sum); ////this statement prints the sum of all the digits on the screen.
    return 0;   //return statement
}
//end of the main body function
