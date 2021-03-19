//Purpose: Print Fibonacci Series.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>  //Preprocessor directive to include standard input output header file

//start of the main body function
int main() {

    int n,n1=0,n2=1,n3; //declaration and initialization of integer variables.
    printf("Enter some value for n: "); //number of terms to be generated.
    scanf("%d",&n);
//for loop begins
    for(int i=0;i<n;i++) {
        if(i<2)
            n3=n1;
        printf("%d, ",n3);
        n1=n2;
        n2 = n3;
        n3=n1+n2;
    }
//for loop ends
    return 0;   //return statement
}
//end of the main body function
