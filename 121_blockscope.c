/****************************************************************************
 *                                                                          *
 * File    : 121_blockscope.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           29/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

void localFoo(int para);

int main(void) {
    int var = 99;
    printf(" Var (main): %d\n" , var);
    localFoo(var);
    return (EXIT_SUCCESS);
}

void localFoo(int para)
{
    printf("%d\n",para);
   // printf("%d",var);
    for(int i = 1; i <= para; ++i){
        printf("%d\n",i);
        printf("%d\n",para);
    }
    //printf("%d",i);
    printf("%d",para);
    
    { //unnamed code block
        char str[] = "\nAjit";
        printf("%s\n",str);
        printf("%d",para);
        int x = 99;
    }
    
   // printf("%s\n",str);
    return;
}
