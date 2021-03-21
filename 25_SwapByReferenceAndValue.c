//Purpose: Swap by reference and value.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include<stdio.h> //Preprocessor directive to include standard input output header file
//this function swaps the numbers by value.
void swapByValue(int a,int b) {
    int temp; 
    temp = a;
    a = b;
    b = temp;
    printf("Values after swapping by value within function: %d and %d\n",a,b);
}
//this function swaps the numbers by reference.
void swapByReference(int *a,int *b) {
    //a and b are pointers to variables n1 and n2;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Values after swapping by reference within function: %d and %d\n",*a,*b);
}
//start of main function
int main(){
    int n1,n2;

    printf("Enter number 1: ");
    scanf("%d",&n1);

    printf("Enter number 2: ");
    scanf("%d",&n2);

    printf("Values before swapping by value in main function: %d amd %d\n",n1,n2);
    swapByValue(n1,n2);
    printf("Values after swapping by value in main function: %d and %d\n",n1,n2);

    printf("\nValues before swapping by value in main function: %d and %d\n",n1,n2);
    swapByReference(&n1,&n2);
    printf("Values after swapping by reference in main function: %d and %d\n",n1,n2);
    return 0; //return statement
 }
//end of main function
