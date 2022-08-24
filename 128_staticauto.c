/****************************************************************************
 *                                                                          *
 * File    : 128_staticauto.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include "stdio.h"
#include "stdlib.h"

static int gsv; //Global static variable with file scope and internal linkage

void incre(void);
void foo(void);
//Error : storage class specified for parameter 'data'
//void baz (static int data);

int main() {
    incre();
//    printf("%d",b); //Scope is local to incre
//    printf("%d",a); //Scope is local to incre
  
    incre();
    incre();
    
    foo();
    return 0;
}

void incre(void) {
    auto int a   = 10; //initialization
    static int b = 10; //initialization
    printf("A : %d", a);
    printf("\tB : %d\n",b);
    a = ( a + 10 ); //Assignment
    b = ( b + 10 ); //Assignment
    return;
}

/*Function parameters are by default non-static and local (implicitly auto)*/
void foo(void){
    static int lsv; //local static variable with Block scope
    printf("Default Values : \n");
    printf("\tStatic local variable  = %d\n", lsv);
    printf("\tStatic global variable = %d\n", gsv);
    return;
}
