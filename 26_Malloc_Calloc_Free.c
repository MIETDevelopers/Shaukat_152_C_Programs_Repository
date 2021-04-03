//Purpose: To demonstrate the use of malloc(), calloc() and free() functions
//Author: Shaukat Ishtiaq
//Date: 03-21-2021
#include<stdio.h> //Preprocessor directive to include standard input output header file
#include<stdlib.h>  //Preprocessor directive to include standard library header file
//start of main function
int main(){
	
	int n;

	printf("No of integers: ");
	scanf("%d",&n);

	int *pointer = (int*) malloc(n*sizeof(int)); //this statement allots a block of memory in heap depending on user input.
	printf("Values to be added to the memory alloted using malloc\n");
	//for loop to enter values to the alloted memory.
	for(int i=0;i<n;i++) {
        printf("Number %d: ",i+1);
        scanf("%d",pointer+i);
	}
	printf("\nPrinting values present in the alloted memory:\n");
	//for loop to print values stored in the alloted memory.
	for(int i=0;i<n;i++) {
        printf("Number %d = %d\n",i+1,*(pointer+i));
	}

	free(pointer); //this statement releases the space alloted memory.
    printf("\nMemory alloted using malloc has been released.\n");


	float *p = (float*) calloc(n,sizeof(float));  //this statement allots a block of memory in heap depending on user input and initializes each block to 0.

    printf("\nValues to be added to the memory alloted using calloc\n");
    //for loop to enter values to the alloted memory.
    for(int i=0;i<n;i++) {
        printf("Number %d: ",i+1);
        scanf("%f",p+i);
	}
	printf("\nPrinting values present in the alloted memory:\n");
	//for loop to print values stored in the alloted memory.
	for(int i=0;i<n;i++) {
        printf("Number %d = %f\n",i+1,*(p+i));
	}
	free(p);    //this statement releases the space alloted memory.
	printf("\nMemory alloted using calloc has been released.");
	return 0;	//return statement
}
//end of main function.
