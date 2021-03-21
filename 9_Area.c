//Purpose: Find the area of ciircle, square and rectangle on user's choice
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file

//start of the main body function
int main()	
{
	float radius, side,length,breadth;
	int choice;

	printf("1-Area of circle\n2-Area of square\n3-Area of rectangle\n");
	scanf("%d",&choice);

	//switch statement to check the user's choice.
	switch(choice) {
		case 1:
			printf("Enter radius of circle\n");
			scanf("%f",&radius);

			printf("Area of circle: %f\n", (3.14*radius*radius));
		break;

		case 2:
			printf("Side of square\n");
			scanf("%f",&side);

			printf("Area of square: %f\n", (side*side));
		break;

		case 3:
			printf("Length and Breadth of rectangle\n");
			scanf("%f %f",&length,&breadth);

            printf("Area of rectangle: %f\n", (length*breadth));
		break;

		default:
			printf("ERROR!");
		break;
	}

	return 0;	//return statement
}
//end of the main body function