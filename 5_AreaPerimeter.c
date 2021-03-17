#include <stdio.h>
int main()
{
	float radius, side,length,breadth;

	scanf("%f %f %f %f",&radius,&side,&length,&breadth);

	printf("Area of circle: %f\n", (3.14*radius*radius));
	printf("Perimeter of circle: %f\n", (2*3.14*radius));
	printf("Area of square: %f\n", (side*side));
	printf("Perimeter of square: %f\n", (4*side));
	printf("Area of rectangle: %f\n", (2*(length+breadth)));
	printf("Area of rectangle: %f\n", (length*breadth));
	return 0;
}