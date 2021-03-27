//Purpose: Read student data from a CSV file.
//Author: Shaukat Ishtiaq
//Date: 03-27-2021
#include <stdio.h>      //Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {
    FILE *pointer = fopen("student.csv","r");

    char data;
    int rollNo;
    float attendancePercentage;



    //fprintf(pointer,"Name,RollNo,Percentage\n");
    //fprintf(pointer,"%s,%d,%f\n",name,rollNo,attendancePercentage);

    do {
        data = fgetc(pointer);
        printf("%c",data);
    }while(data != EOF);
    fclose(pointer);
    return 0;   //return statement
}
