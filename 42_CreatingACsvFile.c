//Purpose: Creating a CSV file.
//Author: Shaukat Ishtiaq
//Date: 03-27-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function

int main() {
    FILE *pointer = fopen("file.csv","w");
    fprintf(pointer,"Name,Roll No\nKrish,23");
    printf("File created successfully.");
    fclose(pointer);
    return 0;   //return statement
}
