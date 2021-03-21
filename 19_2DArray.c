//Purpose: To read and print elements in two dimensional array.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file

//Start of the main body function
int main() {
    int x,y;
    int _2DArray[2][3]; //declaring a 2D array with 2 rows and 3 columns.

    //Nested for loops start.
    for(int i=0;i<2;i++) {  //This for loop determines the value of rows.
        for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Index [%d] [%d]: ",i,j);
            scanf("%d",&_2DArray[i][j]);
        }
    }
    printf("\nPrinting 2D Array: \n");
    for(int i=0;i<2;i++) {   //This for loop determines the value of rows.
        for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Index [%d] [%d] = %d\n",i,j,_2DArray[i][j]);
        }
    }
    //nested for loops end.

    return 0;	//return statement
}
//End of the main body function
