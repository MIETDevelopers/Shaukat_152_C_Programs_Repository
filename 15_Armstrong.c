//Purpose: Check whether a number is an armstrong number.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//start of the main body function
int main() {
    int n,input,sum=0,lastdigit;

    printf("Enter the number: ");
    scanf("%d",&input);

    n = input;
    while(n>0) {
        lastdigit = n%10; //this statement gets us the last digit of the number.
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n/10;   //this statement removes the last digit of the number.
    }
    if(sum == input)
        printf("%d is an armstrong number",input);
    else
        printf("%d is not an armstrong number",input);
    return 0;   //return statement
}
//end of the main body function
