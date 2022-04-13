/****************************************************************************
 *                                                                          *
 * File    : 40_Marks_Percentage                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           13/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
//Accept marks in 3 subjects and display the total marks and percentage
// given : marks are out of 100

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float phy_marks;
	float chem_marks;
	float math_marks;
	float total_marks;
	float percentage_marks;
	const int NUMBER_OF_SUBJECTS = 3;

	printf("Please enter the marks in Physics (out of 100) : ");
	scanf("%f", &phy_marks);
    printf("Please enter the marks in Chemistry (out of 100) : ");
	scanf("%f", &chem_marks);
    printf("Please enter the marks in Math (out of 100) : ");
	scanf("%f", &math_marks);

	total_marks = phy_marks + chem_marks + math_marks;
	percentage_marks = total_marks / NUMBER_OF_SUBJECTS;
	printf("Total Marks = %.2f\tPercentagec = %.2f%%\n",total_marks, percentage_marks);


    return 0;
}

