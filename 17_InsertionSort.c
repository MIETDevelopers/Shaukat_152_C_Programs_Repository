//Purpose: Insertion sort.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//Start of the main body function
int main() {
    int n,temp,j;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n); //taking user input to determine the size of array.

    int numbers[n]; //declaration of an array.

    //for loop to insert values to the array.
    for(int i=0;i<n;i++) {
        printf("Enter element no. %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
    //below is the algorithm of insertion sort.
    for(int i=1;i<n;i++) {
        j= i-1;
        temp = numbers[i];
        while(j>=0 && numbers[j]>temp) {
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1] = temp;
    }
    //for loop to print the sorted array on the screen.
    printf("Sorted array: ");
    for(int i=0;i<n;i++) {
        printf("%d ",numbers[i]);
    }
    return 0;   //return statement
}
//End of the main body function
