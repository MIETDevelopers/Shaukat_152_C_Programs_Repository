//Purpose: Check whether a number is prime or not.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//start of the main body function
int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0||n==1)  //if statement to check whether the user input is equal to 0 or 1.
        printf("%d is not prime",n);
    else if(n==2)   //if statement to check whether the user input is equal to 2.
        printf("%d is prime.",n);
    else {
        int i=2;
        while(i<n) {
            if(n%i==0) {
                printf("%d is a composite number.",n);
                return 0;
            }
        i++;
        }
        printf("%d is a prime number.",n);
    }
    return 0;   //return statement
}
//end of the main body function
