//Purpose: Calculate Euclidean Distance between two given points
//Author: Shaukat Ishtiaq
//Date: 03-19-2021
#include <stdio.h>	//Preprocessor directive to include standard input output header file.
#include <math.h>	//Preprocessor directive to include math.h header file

//start of the main body function
int main()	
{	int x1,x2,y1,y2;
	double value, result;

	printf("Enter the values for x1,x2,y1 and y2\n");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

	value = ((x1-y1)*(x1-y1))+((x2-y2)*(x2-y2));
	printf("Euclidean Distance between the given points is: %lf \n",sqrt(value));
	return 0;	//return statememt
}
//end of the main body function