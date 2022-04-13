/****************************************************************************
 *                                                                          *
 * File    : 35_FloatDivsion                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float num1;
	float num2;
	float divison;
	
	printf("Please enter the  first number : ");
	scanf("%f", &num1);

	printf("Please enter the second number : ");
	scanf("%f", &num2);

    divison = num1 / num2;
    printf("\t %.2f / %.2f = %.2f\n", num1,num2,divison);
  	
	return 0;
}
