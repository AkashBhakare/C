/****************************************************************************
 *                                                                          *
 * File    : 165_Ganeric_Pointer.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *vp; //Generic Pointer
    //Allocate 16 bytes of memory
    vp = malloc(100);
    if( vp == NULL ) //if allocation has failed
    {
        printf("Insufficient memory!\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Memory has been successfully allocated\n");
        printf("Starting from address %p\n", vp);
    }
    //release the block of memory allocated
        free(vp);
    return (EXIT_SUCCESS);
}

