/****************************************************************************
 *                                                                          *
 * File    : 122_blockscope.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           29/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
/*
 * Block Scope
 */
int main(void) {
    int var1 = 10;
    printf("Var 1 = %d\n", var1);
    {   
        int var2; //allowed in all version
        printf("Var 2 = %d\n", var2);
        printf("Var 1 = %d\n", var1); //outer var1
        int var1 = 99; //allowed in C99
        printf("Var 1 = %d\n", var1); //local var1
    }
    printf("Var 1 = %d\n", var1);
//    printf("Var 2 = %d\n", var2);
    for(int i = 0; i < 5; i++)
        printf("\t%d", i);
    
//    printf("\ni = %d",i); Error
    return (EXIT_SUCCESS);
}


