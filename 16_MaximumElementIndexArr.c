//Purpose: To find the biggest element in the array.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file

//Start of the main body function
int main() {
    int n,max;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n); //taking user input to determine the size of array.

    int numbers[n]; //declaration of an array.

    //for loop to insert values to the array.
    for(int i=0;i<n;i++) {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    //for loop to find the biggest number in the entire array.
    for(int i=1;i<n;i++) {
        if(numbers[i]>numbers[i-1])
            max=numbers[i];
    }
    printf("Maximum element in the array is: %d",max); //prints the maximum number on the screen.
	return 0;	//return statement
}
//End of the main body function
