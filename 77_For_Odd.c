/****************************************************************************
 *                                                                          *
 * File    : 77_For_Odd                                                     *
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
 * odd nos betn 1-n
 */

/*
int main() {
    unsigned int counter;
    int limit;
    printf("Please enter the Limit (+ve nonzero value): ");
    scanf("%i", &limit);
    printf("Odd numbers from 1 to %d are as follows:\n", limit);
    for (counter = 1U; counter <= limit; ++counter) {
        // check if the number is odd
        if (counter % 2 != 0) {
            printf("\tOdd = %u\n", counter);
        } //end if
    } // end for
    return (EXIT_SUCCESS);
}
*/

#include <limits.h>
int main() {
    unsigned int oddNumber;
    int limit;
    printf("Please enter the Limit (+ve nonzero value): ");
    scanf("%i", &limit);
    printf("Odd numbers from 1 to %d are as follows\n",limit);
    for (oddNumber = 1; oddNumber <= limit; oddNumber += 2)
    {
        printf("\t\t\t%u\n", oddNumber);
    }
    return (EXIT_SUCCESS);
}


