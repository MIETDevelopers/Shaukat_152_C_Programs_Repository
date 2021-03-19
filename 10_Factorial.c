//Purpose: Find the factorial of a number.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//start of the main body function
int main() {
    int n,result=1; //declaration of variables n and result, and initialization of result to 1.

    printf("Enter a number: ");
    scanf("%d",&n);
//if condition to check whether the number is zero or not.
    if(n == 0) {
        printf("0! = 1");
    }
    else {
        for(int i=1;i<=n;i++)  //for loop to generate all the numbers from n-1 to 1.
        {
            result = result*i;
        }
        printf("%d! = %d",n,result);
    }

    return 0;   //return statememt
}
//end of the main body function