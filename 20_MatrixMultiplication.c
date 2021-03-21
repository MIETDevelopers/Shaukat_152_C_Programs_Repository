//Purpose: Matrix multiplication.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file

//Start of the main body function
int main() {
    int x,y,result=0;
    int matrix1 [3][3]; //declaring a 3x3 matrix.
    int matrix2 [3][3]; //declaring a 3x3 matrix.
    int matrix3 [3][3];

    //Nested for loops start.
    for(int i=0;i<3;i++) {  //This for loop determines the value of rows.
        for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Element [%d] [%d]: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    //nested for loops end.

    //Nested for loops start.
    for(int i=0;i<3;i++) {  //This for loop determines the value of rows.
        for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Element [%d] [%d]: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);

        }
    }
    //nested for loops end.

   for (int i = 0; i <= 2; i++) {
      for (int j = 0; j <= 2; j++) {
         result = 0;
         for (int k = 0; k <= 2; k++) {
            result = result + matrix1[i][k] * matrix2[k][j];
         }
         matrix3[i][j] = result;
      }
   }

     for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
     }
    return 0;	//return statement
}
//End of the main body function
