/****************************************************************************
 *                                                                          *
 * File    : 127_Registerscope.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool checkPrime( register int val);
//bool checkPrime( volatile int val);

int main(void) {
    register int num;
    time_t start = time(NULL);
    register int primeCounter = 0;
    const int EXP_NUMBER_OF_PRIMES = 5;
    const int BIGIN_SEARCH_FROM = 1000000001;//one hundred million and one
   // printf("%p %p\n", &primeCounter, &num);
    num = BIGIN_SEARCH_FROM;
    while (primeCounter != EXP_NUMBER_OF_PRIMES) {
        if (checkPrime(num)) {
            printf("%d is Prime\n", num);
            primeCounter++;
        }
        num++;
    }

    printf("Time used: %g sec. \n", difftime(time(NULL), start));
    return (EXIT_SUCCESS);
}

bool checkPrime( register int val) {
    register int count = 0;

    for (count = 2; count < val; count++) {
        if (val % count == 0)
            return false;
    }
    return true;
}

//bool checkPrime( volatile int val) {
//    volatile int count = 0;
//
//    for (count = 2; count < val; count++) {
//        if (val % count == 0)
//            return false;
//    }
//    return true;
//}
