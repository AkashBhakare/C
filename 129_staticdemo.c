/****************************************************************************
 *                                                                          *
 * File    : 129_staticdemo.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include "stdio.h"
#include "stdlib.h"

//void foo(static int y);

void incre(void);

static int b; //Scope : file , Linkage :internal

int main() {
    incre();
//    printf("%d",a); //Scope is local to incre
    printf("b: %d\n",b);
    incre();
    incre();
    return 0;
}
void incre(void) {
    static int a =  10;  //Scope : block , Linkage : no_linkage
    printf("A : %d\n", a);
    a = ( a + 10 ); //Assignment
    return;
}
