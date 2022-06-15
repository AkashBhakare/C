/****************************************************************************
 *                                                                          *
 * File    : 88_LocalVariableStatic                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           15/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 * Understanding concept of Static Local Variables
 */
int incre();

int main() {
    auto int i;
     printf("i = %d\n",i); // Local to incre()
    incre();
    incre();
    incre();
    incre();
     printf("i = %d\n",i); // Local to incre()
}

int incre() {
    static int i; //Default value 0
    printf("i = %d\n", i);
    i = i + 10;
    return i;
}
