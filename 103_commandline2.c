/****************************************************************************
 *                                                                          *
 * File    : 103_commandline2.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

/*
 * Command line argument 
 */
int main(int argc, char* argv[]) {
    const int EXPECTED_NUMBER_OF_ARGUMENTS = 2;
    unsigned int num;
    long double f = 1.0L;
    unsigned int cnt;

    if (argc != EXPECTED_NUMBER_OF_ARGUMENTS) {
        fprintf(stderr, "Incorrect number of arguments \n");
        fprintf(stderr, "usage: printFact <integer>\n");
        exit(EXIT_FAILURE);
    }
    //converting string to integer
    num = atol(argv[1]);
    // Calculating factorial
    for (cnt = 2; cnt <= num; cnt++) {
        f = f * cnt;
    }
    printf("Factorial of %u = %.0Lf\n", num, f);
    return (EXIT_SUCCESS);
}
