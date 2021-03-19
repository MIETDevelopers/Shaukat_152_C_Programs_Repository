//Purpose: Calculate the area and perimeter of circle,square and rectangle.
//Author: Shaukat Ishtiaq
//Date: 03-19-2021

#include <stdio.h>	//Preprocessor directive to include standard input output header file
//start of the main body function
int main()
{
	float radius, side,length,breadth;	//Declaration of variables.

	scanf("%f %f %f %f",&radius,&side,&length,&breadth);

	printf("Area of circle: %f\n", (3.14*radius*radius));	//area of circle
	printf("Perimeter of circle: %f\n", (2*3.14*radius));	//perimeter of circle
	printf("Area of square: %f\n", (side*side));	//area of square
	printf("Perimeter of square: %f\n", (4*side));	//perimeter of square
	printf("Area of rectangle: %f\n", (length*breadth));	//area of rectangle
	printf("Perimeter of rectangle: %f\n", (2*(length+breadth)));	//perimeter of rectangle
	return 0;	//return statememt
}
//end of the main body function