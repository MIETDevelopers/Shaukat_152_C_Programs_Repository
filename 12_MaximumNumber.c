//Purpose: Find the biggest number.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//start of the main body function
int main() {
    int n,max=0,number;

    printf("How many numbers do you want to check: ");
    scanf("%d",&n);
//For loop to scan n number of numbers.
    for(int i=0;i<n;i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&number);

        if(number > max)
            max = number;
    }
    printf("Biggest number is %d",max);
    return 0;   //return statement
}
//end of the main body function
