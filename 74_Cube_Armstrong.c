/****************************************************************************
 *                                                                          *
 * File    : 74_Cube_Armstrong                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include<stdio.h>
#include<stdlib.h>
/*
An Armstrong number of three digits is an integer is such that the sum of the cubes 
of its digits is equal to the number itself. 
For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.

Write a program to find all Armstrong number in the range of 0 and 999

*/
int main()
{
	int number;
	int num;
	int digit;
	int sum;
	

	printf("Please Enter the three digit Integer : ");
	scanf("%i",&num);
	
	digit = num;

    for (num = 0; num < 1000; num++)
    {
        number = num;
        sum = 0;
        
        while (number > 0)
        {
            digit = number % 10;
            sum += digit * digit * digit;
            number /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}

  
