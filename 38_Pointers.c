//Purpose: Usage of pointers.
//Author: Shaukat Ishtiaq
//Date: 03-26-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function


int main() {

    float x=12.21;
    float *y;
    y = &x;
    printf("Address of x = %d\n",y);
    printf("Address of x = %.2f",*y);

    return 0;   //return statement
}
