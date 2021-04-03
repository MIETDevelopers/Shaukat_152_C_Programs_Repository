//Purpose: To store information of a student using union.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file
#include <string.h> //Preprocessor directive to include string.h header file

union Data {    //declaration of a union.
   int rollNo;
   float totalMarks;
   char name[20];
};
//Start of the main body function
int main( ) {

   union Data data; //this statement creates a variable of type Data which is a union.

   data.rollNo = 10;
   printf( "Student Roll no : %d\n", data.rollNo);

   data.totalMarks = 220.5;
   printf( "Student Marks : %f\n", data.totalMarks);

   strcpy( data.name, "Jack Sparrow");
   printf( "Student Name : %s\n", data.name);

   return 0;    //return statement
}
//End of the main body function
