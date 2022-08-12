/****************************************************************************
 *                                                                          *
 * File    : 120_VarArgs7.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
   Write  a function named get_average() which returns 
  average of all non zero positive arguments passed to it...

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

float get_average(size_t arg_count, ...);

int main(){
	const size_t NUMBER_OF_VALUE = 5;
	float average = get_average(NUMBER_OF_VALUE,4,5,-3,0,6);
	printf("The average of the non zeero +v arguments = %f\n",average);

	return EXIT_SUCCESS;
}
