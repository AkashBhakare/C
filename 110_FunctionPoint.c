/****************************************************************************
 *                                                                          *
 * File    : 110_FunctionPoint.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/* pointer to a function */
#include<stdlib.h>
#include<stdio.h>

long long int square(int);
long long int cube(int);

int main() {
    /* pointer to function returning long long value and taking 
     * a single integer as its argument */
    long long int (*fptr)(int);
    int number = 0;
    long long int result;

    /* storing address of function square  into pointer ptr */
    fptr = square;

    printf("Address of square = %p\n", square);
    printf("Address of square = %p\n", fptr);

    printf("Please enter a integer : ");
    scanf("%d", &number);

    /* invoking using pointer */
    result = fptr(number);
    printf("Square of number %d = %lld\n", number, result);

    /* invoking using function name */
    result = square(number);
    printf("Square of number %d = %lld\n", number, result);

    /*storing address of function cube into pointer ptr */
    fptr = cube;

    /* invoking using function name */
    result = cube(number);
    printf("Cube of the number %d = %lld\n", number, result);

    /* invoking function using pointer */
    result = fptr(number);
    printf("Cube of the number %d = %lld\n", number, result);
    return 0;
}

long long int cube(int number) {
    return (long long int) number * number*number;
}

long long int square(int number) {
    return (long long int) number*number;
}
