/****************************************************************************
 *                                                                          *
 * File    : 15_Format_Precision                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           22/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[40] = "Chandra";
	float factionalValue = 72.5897F;
	int intValue = 12345;
	double dblFraction = 123456789.123456789;
	
	//printf("Fractional Value = %f\n", factionalValue);

	//printf("Fractional Value = %.2f\n", factionalValue);
    //printf("Fractional Value = %.4f\n", factionalValue);
    //printf("Fractional Value = %.0f\n", factionalValue);
    //printf("Fractional Value = %10.2f\n", factionalValue);
    //printf("Fractional Value = %010.2f\n", factionalValue);
    //printf("Fractional Value = %10.2f%%\n", factionalValue);

    //printf("Double Values = %lf\n", dblFraction);
	//printf("Double Values = %.2lf\n", dblFraction);
	//printf("Double Values = %.10lf\n", dblFraction);
    
   // printf("x = %E\n",factionalValue);
	//printf("x = %.2E\n",factionalValue);

	/*
    printf("\nString = %s\n", name);
	printf("%s is my friend\n", name);
	printf("%10s is my friend\n", name);
	printf("%5s is my friend\n", name);
	printf("%.5s is my friend\n", name);
	printf("%10.5s is my friend\n", name);
    */

    /*
    printf("Value = %d\n", intValue);
	printf("Value = %.10d\n", intValue);
	printf("x = %E\n", intValue);
	printf("x = %.2E\n", intValue);
    */

    
    float mark1     = 91.9999;
	char name1[100] = "Gopal";
	char name2[100] = "Gopal krishna Swamy";
	float mark2     = 88.8888;

	printf("Name    = %10sMarks     = %10f\n",name1,mark1);
    printf("\nName  = %-10sMarks    = %-10f\n",name1,mark1);

    printf("Name    = %-10sMarks    = %-10f\n",name2,mark2);
    printf("\nName  = %-11.10sMarks = %10.2f\n",name1,mark1);
    printf("Name    = %11.10sMarks  = %10.2f\n",name2,mark2);
    


    return 0;
}

