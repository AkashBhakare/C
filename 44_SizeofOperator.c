/****************************************************************************
 *                                                                          *
 * File    : 44_SizeofOperator                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           22/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

//Size of operator

struct Student //user defined type
{
	char name[20];
	int roll;
	float per;
};

int main(void)
{
	int intVar = 100;   //basic type
	char charArray[10]; //derived type
    
	//variable name as argument
	printf("Size of integer variable = %zu bytes\n", sizeof (intVar));
	printf("Size of integer variable = %"PRIu64" bytes\n", sizeof (intVar));

	//constant as argument
	printf("Size of memory required for the constanat = %zu bytes\n", sizeof (100.5));

	//basic data type name as argument
	printf("Size of integer = %zu bytes\n", sizeof (int));
    
	//user defined data type name as argument
	printf("Size of structure student = %zu bytes\n",sizeof (struct Student));

	//Derived Type : Array name as an argument
	printf("Size of Array = %zu bytes\n", sizeof (charArray));

	printf("Size of unsigned long int = %zu bytes \n", sizeof (unsigned long int));

	printf("Size of long double = %zu bytes\n", sizeof (long double));

	printf("Short int = %zu bytes\n", sizeof (short int));
	printf("int       = %zu bytes\n", sizeof (int));
	printf("long int  = %zu bytes\n", sizeof (long int));
	printf("long long int = %zu bytes\n", sizeof (long long int));
	printf("Float     = %zu bytes\n", sizeof (float));
	printf("Double    = %zu bytes\n", sizeof (double));
	printf("Long Double = %zu bytes\n", sizeof (long double));
	
	return 0;
}
