/****************************************************************************
 *                                                                          *
 * File    : 118_VarArgs5.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void printPlayerScores(int, ...);

int main() {
    printPlayerScores( 4, "Sachin T", 100, "Ricky P", 71, "Virat K", 68, "Kumar S", 63);
    return EXIT_SUCCESS;
}

void printPlayerScores(int n, ...) /* n must be at least 1 */ {
    const char * name;
    int centuries;
    va_list ap;
    int i;
    va_start(ap, n);
    for (i = 1; i <= n; ++i) {
        name = va_arg(ap, const char*);
        centuries = va_arg(ap, int);
        printf("\'%s\' has scored %d centuries\n", name, centuries);
    }
    va_end(ap);
    return;
}
