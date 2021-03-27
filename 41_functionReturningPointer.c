//Purpose: Implementation of a function which returns a pointer.
//Author: Shaukat Ishtiaq
//Date: 03-27-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function

int* returnPointer();

int main() {
    int *ptr = returnPointer();
    printf("%d",ptr);
    return 0;   //return statement
}
int* returnPointer() {
    int *pointer;
    int number = 717;

    pointer = &number; //pointer = address of number variable.
    return pointer; //this statement returns a pointer.
}
