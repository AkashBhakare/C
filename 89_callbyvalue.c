/****************************************************************************
 *                                                                          *
 * File    :89_callbyvalue                                                   *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           17/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


// function calls : call by value
#include<stdio.h>

void swap(int, int); //function declaration

int main(void) {
    int iVar1 = 10;
    int iVar2 = 20;
    printf("iVar1 = %d\tiVar2 = %d (in funct main)\n", iVar1, iVar2);
    swap(iVar1, iVar2); // Call by value
    printf("iVar1 = %d\tiVar2 = %d (in funct main)\n", iVar1, iVar2);
    return 0;
}

void swap(int iVar1, int iVar2) {
    int iVar3;
    iVar3 = iVar1;
    iVar1 = iVar2;
    iVar2 = iVar3;
    printf("iVar1 = %d\tiVar2 = %d (in funct swap)\n", iVar1, iVar2);
    return;
}
