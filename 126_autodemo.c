/****************************************************************************
 *                                                                          *
 * File    : 126_autodemo.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void doit(int data) {
    data++;
    printf("Data : %d\n", data);
    return;
}

void foo()
{
    auto float f;
    auto int i;
    printf("Default Value int : %d\tFloat : %f\n",i,f);
    return;
}

int main(void) {
    auto int val = 100;
    doit(val);
    doit(val);
    doit(val);
    foo();
    return EXIT_SUCCESS;
}
