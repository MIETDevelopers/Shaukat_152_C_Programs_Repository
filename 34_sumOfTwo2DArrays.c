//Purpose: Sum of two 2D arras.
//Author: Shaukat Ishtiaq
//Date: 03-26-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function
int main() {
 int x,y;
    int _1Array[2][3]; //declaring a 2D array with 2 rows and 3 columns.
    int _2Array[2][3]; //declaring a 2D array with 2 rows and 3 columns.

    printf("Enter values for 1st Array\n");
    for(int i=0;i<2;i++) {  //This for loop determines the value of rows.
        for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Index [%d] [%d]: ",i,j);
            scanf("%d",&_1Array[i][j]);
        }
    }
    printf("\nEnter values for 2nd Array\n");
    for(int i=0;i<2;i++) {  //This for loop determines the value of rows.
        for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
            printf("Index [%d] [%d]: ",i,j);
            scanf("%d",&_2Array[i][j]);
        }
    }
        printf("\nSum of the two arrays is:\n");
         for(int i=0;i<2;i++) {  //This for loop determines the value of rows.
            for(int j=0;j<3;j++) {  //This for loop determines the value of columns.
                printf("%d ",_1Array[i][j] +_2Array[i][j]); //This statement prints the sum.

                if(j==2)       //This statement adds a new line character after every 3 columns.
                    printf("\n");
        }
    }

	return 0;	//return statement
}
//End of the main body function
