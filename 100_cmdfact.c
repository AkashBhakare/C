/****************************************************************************
 *                                                                          *
 * File    : 100_cmdfact.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
long double factorial(int);

int main(int argc, char* argv[]) {
    const int EXCEPTED_NUMBER_OF_ARGS = 2;
    if(argc != EXCEPTED_NUMBER_OF_ARGS){
        fprintf(stderr,"Incorrect number of arguments passed\n");
        fprintf(stderr,"Correct usage : facto <value>\n");
        exit(EXIT_FAILURE);
                
    }
    int number = atoi(argv[1]);
    long double fact;
    fact = factorial(number);
    printf("Factorial of %d = %.0Lf\n", number, fact);
    return EXIT_SUCCESS;
}

long double factorial(int number) {
    long double f = 1.0L;
    
    while (number > 1) {
        f = f * number;
        number = number - 1;
    }
   
    return f;
}
