//Purpose: To store the information of student marks using structures and find total marks of individual student
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
struct Student{ //declaration of a structure
	float cse;
	float graphics;
	float maths;
	float physics;
};
//Start of the main body function
int main() {
    struct Student structVariable; //this statement creates a structure variable of type Student.

    printf("CSE: ");
    scanf("%f",&structVariable.cse);
    printf("Engineering gtaphics: ");
    scanf("%f",&structVariable.graphics);
    printf("Mathematics: ");
    scanf("%f",&structVariable.maths);
    printf("Physics: ");
    scanf("%f",&structVariable.physics);

    printf("Total marks = %f",structVariable.cse+structVariable.graphics+structVariable.maths+structVariable.physics);  //this statement prints the total marks scored by the student.
	return 0;	//return statement
}
//End of the main body function
