/****************************************************************************
 *                                                                          *
 * File    : 109_Recursive_5.c                                              *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           22/07/2022  Created                                            *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* Iterative GCD: Returns the greatest common divisor of m and n. */
int gcd(int m, int n) {
    while (n) {
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    return m;
}

/* Recursive GCD */
int gcdr(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcdr(n, m % n);
}

int main(void) {
    int n1 = 34;
    int n2 = 56;
    int result;
    result = gcd(n1, n2);
    printf("GCD of %d & %d = %d\n", n1, n2, result);

    n1 = 18;
    n2 = 12;
    result = gcdr(n1, n2);
    printf("GCD of %d & %d = %d\n", n1, n2, result);
    return 0;
}
