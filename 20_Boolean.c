/****************************************************************************
 *                                                                          *
 * File    : Boolean                                                    *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           30/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Using data types introduced in C99
 */

int main() {
    _Bool flag = 1;
	flag = 0;

    /* Use stdbool.h for true/false and bool */
    flag = true;
    flag = false;
    
    bool isPrime;
    isPrime = true;
        
    printf("%d\n", true && false);
    printf("%d\n", true || false);
    printf("%d\n", !true);

    return (EXIT_SUCCESS);
}
