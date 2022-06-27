/****************************************************************************
 *                                                                          *
 * File    : 93_Call_By_Reference                                           *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/06/2022  Created                                            *
 *                                                                          *
 ****************************************************************************/

// function calls : call by Reference
#include<stdio.h>
#include "stdlib.h"
void swap(int *, int*); //function declaration

int main(void) {
    int iVar1 = 10;
    int iVar2 = 20;
    printf("iVar1 = %d\tiVar2 = %d (in funct main)\n", iVar1, iVar2);
    swap(&iVar1, &iVar2); // Call by reference
    printf("iVar1 = %d\tiVar2 = %d (in funct main)\n", iVar1, iVar2);
    return EXIT_SUCCESS;
}

void swap(int *ptr1, int *ptr2) {
    int iVar3;
    iVar3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = iVar3;
    printf("iVar1 = %d\tiVar2 = %d (in funct swap)\n", *ptr1, *ptr2);
    return;
}
