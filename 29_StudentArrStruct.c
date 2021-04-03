//Purpose: Array of structures for student marks for each student and passing  it to function for various operations
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
struct Student{ //declaration of a structure
    char name[15];
    int rollNo;
    float totalMarks;
};

void displayStudentData(struct Student p[],int n); //declaration of a function that prints the data in structure array.

//Start of the main body function
int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d",&n);

    struct Student studentArray[n];

    for(int i=0;i<n;i++) {
        printf("Enter data of student no. %d\n",i+1);
        printf("Student First Name: ");
        scanf("%s",studentArray[i].name);
        printf("Student Roll no.: ");
        scanf("%d",&studentArray[i].rollNo);
        printf("Student Marks: ");
        scanf("%f",&studentArray[i].totalMarks);
        printf("\n");
    }

    displayStudentData(studentArray,n); //calling displayStudentData() function and passing the studentArray and its size(n) as arguments.
    return 0;	//return statement
}
//End of the main body function

void displayStudentData(struct Student P[],int n) {
    //for loop to print all the student data in the array.
    for(int i=0;i<n;i++) {
        printf("Student No %d Data\n",i+1);
        
        printf("Name: %s\n",P[i].name);
        printf("Roll no: %d\n",P[i].rollNo);
        printf("Total Marks: %.2f\n",P[i].totalMarks);
        printf("\n");   //this statement adds a new line character after every iteration to separate different student data.
    }
}
