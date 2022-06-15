/****************************************************************************
 *                                                                          *
 * File    : 86_LocalVariable                                                *
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
 * Understanding concept of local and global variable
 */
int incre(int);

int main() {
    int i;
    printf("i = %d \n", i);
    i = incre(10);
    printf("i = %d \n", i);
//  printf("x = %d \n", x); //Local to incre()
    incre(i);
    printf("i = %d \n", i);
    //unnamed code block i.e. anonymous code block
    {
        int a = 99;
        printf("a = %d \n", a++);
        printf("i = %d \n", i++); 
    }
//  printf("a = %d \n", a); //Local to anonymous code block
    printf("i = %d \n", i);
    return (EXIT_SUCCESS);
}

int incre(int x) {
    x = x + 10;
    printf("x = %d \n", x);
    x = x + 10;
//    i = i + 10; //Local to function main
    return x ;
}
