/****************************************************************************
 *                                                                          *
 * File    : 126_Registerdemo.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include "stdio.h"
#include "stdlib.h"

void foo(register int y){
	
}

void incre(void);

//register int b; //invalid

int main() {
    incre();
//    printf("%d",a); //Scope is local to incre
    incre();
    incre();
    return 0;
}

void incre(void) {
    register int a =10 ;  //Scope : block , Linkage : no_linkage
    printf("A : %d\n", a);
    a = ( a + 10 ); //Assignment
     
    register int b;
   // printf("Address of b : %p\n", &b); // will not be stored in register
    return;
}
