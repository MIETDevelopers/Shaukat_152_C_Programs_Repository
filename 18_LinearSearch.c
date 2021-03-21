//Purpose: Searching an element in an array using linear search.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file

//Start of the main body function
int main() {
    int n,search;
    int trigger = 0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n); //taking user input to determine the size of array.

    int numbers[n]; //declaration of an array.

    //for loop to insert values to the array.
    for(int i=0;i<n;i++) {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("Enter the number you want to search for: ");
    scanf("%d",&search);

    //below is the linear search algorithm.
    for(int i =0;i<n;i++) {
        if(numbers[i]== search) {
            printf("Number found on index : %d\n",i);
            trigger = 1;
        }
    }
    if(trigger == 0)
        printf("Number not found");
	return 0;	//return statememt
}
//End of the main body function
