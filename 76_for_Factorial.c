/****************************************************************************
 *                                                                          *
 * File    :76_for_Factorial                                                   *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


/*
 *  calculate the Factorial
 */

int main(void) {
    unsigned int counter;
    int number;
    long double factorial = 1.0L;
    printf("Enter a integer to calculate its factorial : ");
    scanf("%i", &number);
    for (counter = 1U; counter <= number; ++counter)
    {
        factorial = factorial * counter;
    }
    printf("The factorial of %d is %.0Lf\n" ,number,factorial);
 
    return (EXIT_SUCCESS);
}

