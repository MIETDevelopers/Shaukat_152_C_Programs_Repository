//Purpose: To store information of a student using union.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//Start of the main body function
int main( ) {
    float cse,drawing,physics,maths;

    FILE *pointer;
    pointer = fopen("fileHandling.txt","w+");

    printf("Enter marks for CSE: ");
    scanf("%f",&cse);
    printf("\nEnter marks for Drawing: ");
    scanf("%f",&drawing);
    printf("\nEnter marks for Physics: ");
    scanf("%f",&physics);
    printf("\nEnter marks for Mathematics: ");
    scanf("%f",&maths);

    fprintf(pointer,"CSE: %f\nDrawing: %f\nPhysics: %f\nMathematics: %f",cse,drawing,physics,maths);
    printf("Data has been written on a file.");
    fclose(pointer);

    return 0;    //return statement
}
//End of the main body function
