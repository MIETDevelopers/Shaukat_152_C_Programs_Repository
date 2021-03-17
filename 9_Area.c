#include <stdio.h>
int main()
{
	float radius, side,length,breadth;
	int choice;

	printf("1-Area of circle\n2-Area of square\n3-Area of rectangle\n");
	scanf("%d",&choice);

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

	return 0;
}