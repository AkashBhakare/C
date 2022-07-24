/****************************************************************************
 *                                                                          *
 * File    : 111_FunctionPoint.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * Application :
 * function as an argument to a function
 */
#include <stdio.h>
#include <stdlib.h>

long long int cube(int x);
long long int square(int x);

void printTable(long long int(*fptr)(int), int start, int end);
    
int main() {
    printf("Table of Squares\n");
    /*    function "square" passed as argument */
    printTable(square, 2, 9);
    
    printf("Table of Cubes\n");
    /*    function "cube" passed as argument */
    printTable(cube, 2, 9);
    return 0;
}

long long int cube(int x) {
    return (long long int) x * x * x;
}
long long int square(int x) {
    return (long long int) x * x;
}

void printTable(long long (*fptr)(int), int start, int end) {
    long long int result;
    int count = start;
    for(count = start; count <= end; ++count){
        result = fptr(count);
        printf("%d = %lld\n", count, result);
    }
    return;
}
