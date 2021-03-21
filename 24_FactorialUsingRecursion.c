//Purpose: Calculate the factorial of a number using recursion.
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include<stdio.h> //Preprocessor directive to include standard input output header file
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
//start of main function
int main(){
   int number;
  long fact;
  printf("Enter a number: ");
  scanf("%d", &number);

  fact = factorial(number); 
  printf("Factorial of %d is %ld\n", number, fact);
  return 0; //return statement
 }
//end of main function