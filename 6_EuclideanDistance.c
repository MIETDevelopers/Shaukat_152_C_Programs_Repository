#include <stdio.h>
#include <math.h>

int main()
{	int x1,x2,y1,y2;
	double value, result;

	printf("Enter the values for x1,x2,y1 and y2\n");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

	value = ((x1-y1)*(x1-y1))+((x2-y2)*(x2-y2));
	printf("Euclidean Distance between the given points is: %lf \n",sqrt(value));
	return 0;
}
