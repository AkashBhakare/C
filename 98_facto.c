/****************************************************************************
 *                                                                          *
 * File    : 98_facto.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
long double factorial(int);
int getInteger(void);

int main(void) {
    int number;
    long double fact;
    printf("Enter a integer to calculate its factorial:");
    number = getInteger();
    if(number < 0){
        fprintf(stderr,"Expected +ve integer!\n");
        exit(EXIT_FAILURE);
    }
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
    //    printf("Return Address %p\n",__builtin_return_address(0));
    return f;
}

int getInteger() {
    int data;
    bool isScanSuccessful;
    do{
        isScanSuccessful = scanf("%i", &data);
        //if extraction of data has failed
        if(isScanSuccessful == false){
            fprintf(stderr,"Input Failure!\n");
            fprintf(stderr,"Please Enter a integer Value:");
            while(getchar()!=10); //clear input stream
       }
    }while(isScanSuccessful != true);
    return data; // return integer on success
}
