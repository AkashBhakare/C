/* Floating point data type*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float  weight	= 70.546789;
	double pi 		= 3.1456789765;
	printf("Weight (float)  %f\n", weight);
	printf("PI     (double) %.10f\n", pi);

	printf("Using the data types\n");
	printf("Size of float type %zu bytes\n", sizeof(float));
	printf("Size of double type %zu bytes\n", sizeof(double));
	printf("Size of long double type %zu bytes\n", sizeof(long double));
	
	printf("Using the Literals\n");
	printf("Size of float type constant %zu bytes\n", sizeof(7.5F));
	printf("Size of float type constant %zu bytes\n", sizeof(7.5f));
	printf("Size of double type constant %zu bytes\n", sizeof(7.5));
	printf("Size of long double type %zu bytes\n", sizeof(7.5L));
	return EXIT_SUCCESS;
}
