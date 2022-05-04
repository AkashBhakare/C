/****************************************************************************
 *                                                                          *
 * File    :46_BonusCalculation                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/*
*Accept department code and basic salary of an employee and
calculate the bouns to be paid
Given:
  -Department codes are A/B/C/D.
  -Bouns is 50% of the basic salary, and is paid to all
    employees except from those who have department code A.
*/
#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>


int main(){
    char deptCode;    //department code
    float basic;      //basic salary
    float bouns = 0.0F; //50% bouns rate
	const float BOUNS_RATE = 0.5F;
	const float MIN_SALARY = 0.0F;

	printf("Please enter Department Code(A/B/C/D):");
	scanf("%c", &deptCode);

	deptCode = toupper(deptCode);

	/*Input Validation*/
	if (deptCode != 'A' && deptCode != 'B' && deptCode != 'C' && deptCode != 'D'){
		fprintf(stderr,"The department code \'%c\' entered is invalid\n", deptCode);
        fprintf(stderr,"The valid department codes are (A/B/C/D) ");
		exit(EXIT_FAILURE); /*Terminates the execution of the program*/
	}

	printf("Please enter the basic salary (Rs): ");
	scanf("%f", &basic);

	if(basic < MIN_SALARY){
		fprintf(stderr,"The Basic salary cannot be negative\n");
		exit(EXIT_FAILURE);
	}

	if (deptCode != 'A'){
		/* Computing bouns if department code is not 'A' */
		bouns = basic * BOUNS_RATE;
	}

	printf("The Bouns for employee with department code \'%c'\ is Rs : %.2f\n",deptCode, bouns);

	return EXIT_SUCCESS;

}

