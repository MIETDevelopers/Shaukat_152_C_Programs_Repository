//Purpose: Usage of pointers.
//Author: Shaukat Ishtiaq
//Date: 03-26-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function


int main() {
    int x[] = {1,2,3};

    printf("%d ",(*x+0));   //x stores the base address of the array
    printf("%d ",*(x+1));   //thus acting as a pointer.
    printf("%d ",*(x+2));   //by incrementing the base address and using * operator, we can access array elements.
    return 0;   //return statement
}
