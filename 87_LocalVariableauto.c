/****************************************************************************
 *                                                                          *
 * File    : 87_LocalVariableauto                                                     *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           15/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

//Introduction in storage class in "auto"

#include <stdio.h>
#include <stdlib.h>

/*
 * Understanding concept of local and global variable
 */
int incre();

int main() {
    auto int i;
    printf("i = %d\n",i); // Default value garbage
    incre();
    incre();
    incre();
    printf("i = %d\n",i);
}

int incre(){
    auto int i = 10;
//    printf("Return Address %p\n", __builtin_return_address(0));
    printf("i = %d\n",i);
    i = i + 10;
    return i;
}
