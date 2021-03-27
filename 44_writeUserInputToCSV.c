//Purpose: Takes student data and writes it on a CSV file.
//Author: Shaukat Ishtiaq
//Date: 03-27-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {
    FILE *pointer = fopen("student.csv","w");

    char name[10];
    int rollNo;
    float attendancePercentage;

    printf("Name: ");
    gets(name);

    printf("Roll No: ");
    scanf("%d",&rollNo);

    printf("Attendance percentage: ");
    scanf("%f",&attendancePercentage);

    fprintf(pointer,"Name,RollNo,Percentage\n");
    fprintf(pointer,"%s,%d,%f\n",name,rollNo,attendancePercentage);
    fclose(pointer);
    return 0;   //return statement
}
