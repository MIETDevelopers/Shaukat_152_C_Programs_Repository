//Purpose: Finding the biggest number among three numbers.
//Author: Shaukat Ishtiaq
//Date: 03-26-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function


int main() {
    int number,max=0;
    for(int i=0;i<3;i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&number);

        if(number > max)
            max = number;
    }
    printf("Maximum no = %d",max);
    return 0;   //return statement
}
