/****************************************************************************
 *                                                                          *
 * File    : 85_LocalVariable                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           15/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int incre(void);

int main() {
    int i;
    printf("i = %d \n", i);
    incre();
    incre();
    printf("i = %d \n", i);
    i = incre();
    printf("i = %d \n", i);
    return EXIT_SUCCESS;
} // main

int incre(void) {
    int i = 10;
    printf("i = %d \n", i);
    i = i + 10;
    return i;
} // incre
