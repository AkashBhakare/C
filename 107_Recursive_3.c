/****************************************************************************
 *                                                                          *
 * File    : 107_Recursive_3.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           22/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 * Factorial : recursive
 */
long double factorial(int);
long double factRec(int);
int getInteger(void);

int main() {
    int num;
    long double fact;

    num = getInteger();
//    fact = factorial(num);
     fact = factRec(num);
    printf("The factorial of %d = %.0Lf\n", num, fact);

    return (EXIT_SUCCESS);
}

int getInteger(void) {
    int num;
    printf("Please enter a integer :");
    scanf("%i", &num);
    return num;
}

long double factorial(int n) {
    long double ans = 1.0L;
    while (n > 1) {
        ans = ans * n;
        n--;
    }
    return ans;
}

/*
 * Recursive function that returns the
 * factorial of the given integer
 * Function Call : fact = factRec(n);
 */
long double factRec(int n) {
    if (n > 1) {
        return ( n * factRec(n - 1));
    } else {
        return 1.0L;
    }
}
