//Purpose: Takes student data and writes it on a CSV file.
//Author: Shaukat Ishtiaq
//Date: 03-30-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {
    FILE *pointer = fopen("student.csv","w");

    char name[10];
    int rollNo,n;
    float attendancePercentage;


    printf("Number of students: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++) {

    printf("Name: ");
    scanf("%s",name);

    printf("Roll No: ");
    scanf("%d",&rollNo);

    printf("Attendance percentage: ");
    scanf("%f",&attendancePercentage);


    fprintf(pointer,"%s,%d,%f\n",name,rollNo,attendancePercentage);
    }
    fclose(pointer);
    return 0;   //return statement
}
