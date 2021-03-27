//Purpose: Read data from a CSV file.
//Author: Shaukat Ishtiaq
//Date: 03-27-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {
    FILE *pointer = fopen("file.csv","r"); //pointer contains the address of the file opened.
    char input;
    if(pointer == NULL) //pointer will be equal to NULL if program couldn't open/find file.csv.
        printf("Couldn't open file.");
    else {
        do {
            input = fgetc(pointer); //input contains the character read from the file.
            printf("%c",input); //this statement prints the read character on screen.
        }while(input !=EOF); 
    }
    return 0;   //return statement
}
