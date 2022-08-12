/****************************************************************************
 *                                                                          *
 * File    : 115_VarArgs2.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

int max(int, ...);
int min(int, int);

int main() {
    int num1 = 10;
    int num2 = 5;
    int result;
    result = min(num1, num2);
    printf("Smallest = %d\n", result);
    result = max(7, 45, 95, num2, 78, 899, num1, 46);
    printf("Largest = %d\n", result);
    return EXIT_SUCCESS;
}

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int max(int n, ...) /* n must be at least 1 */ {
    //    create a list of variable argument
    va_list ap;
    int i;
    int current;
    int largest;
    //    Specify after which argument does the variable list appears; 
    //    and populate the list with variable arguments
    va_start(ap, n);

    //    extract first argument of type int from the list
    largest = va_arg(ap, int);
    for (i = 1; i < n; i++) {
        //    extract next argument of type int from  the list
        current = va_arg(ap, int);
        if (current > largest) {
            largest = current;
        }
    }
    //    do clean up of the variable list
    va_end(ap);
    return largest;
}
