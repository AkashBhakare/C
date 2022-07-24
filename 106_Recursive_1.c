/****************************************************************************
 *                                                                          *
 * File    : 106_Recursive_1.c                                                         *
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
 * Incorrect recursive call
 */

int main() {
    printf("Start\n");
    foo();
    return (EXIT_SUCCESS);
}

void foo() {
    static int count;
    int a[10000]={0};
    printf("Count = %d\n", ++count);
    foo();
    printf("Bye Bye !");
}
