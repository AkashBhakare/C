/****************************************************************************
 *                                                                          *
 * File    : 123_filescope.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           29/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int units = 199; //file scope

void foo(void);
void baz(void);

int main(void) {
    printf("Units (main)= %d\n", units);
    foo();
    baz();
    return EXIT_SUCCESS;
}

void foo() {
    printf("Units (foo) = %d\n", units);
    return;
}

/* Local variables (block scope) are given preference over 
 * File scope(Global variable*/
void baz() {
    int units = -10;
    printf("Units (baz) = %d\n", units);
    return;
}
