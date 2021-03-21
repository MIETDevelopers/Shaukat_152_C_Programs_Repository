//Purpose: Demonstrate the use of various string operations.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h> //Preprocessor directive to include standard input output header file
#include <string.h>

void string_functions(char input[]);
int string_length(char input[20]);

//start of the main body function
int main()
{
    char nickname[20];
    string_functions(nickname);

    printf("%d",string_length(nickname)); //this will print the length of string using strlen function.

    return 0;
} 
//end of the main body function
void string_functions(char input[20]) {
    /* Console display using puts */
    puts("Enter your Nick name:");

    /*Input using gets*/
    gets(input);

    puts(input);//printing a string using puts

}
int string_length(char input[20]) {
     int x = strlen(input);
     return x;  //return statement
}
