/****************************************************************************
 *                                                                          *
 * File    : 96_ArrayofPointer                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 99;
    int a[5] = {11,22,33,44,55};
    int j = 88;
    
    int * ptr;
    int *parr[3];
    
    printf("i = %d\n", i);
    ptr = &i;
    printf("i = %d\n", *ptr);
    
    printf("a[0] = %d\n", a[0]);
    ptr = &a[0];
    printf("a[0] = %d\n", *ptr);
     printf("a[2] = %d\n", a[2]);
    ptr = &a[2];
    printf("a[2] = %d\n", *ptr);
    
    ptr = a;
    printf("a[0] = %d\n", *ptr);
    
    parr[0] = &i;
    parr[1] = a;
    parr[2] = &j;
    
    printf("%d %d %d \n", *parr[0],*parr[1], *parr[2]);
    
    ptr = &i;
            
    return 0;
}

