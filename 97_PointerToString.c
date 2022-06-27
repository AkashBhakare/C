/****************************************************************************
 *                                                                          *
 * File    :97_PointerToString                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           26/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/*
 * Pointer to String
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch = 'A';
    char *cp = &ch;
    char name[10] = "Ajay";
    printf("Value = %c\tAddress  = %p\n", *cp, cp);
    cp = name;
    printf("Value = %s\tAddress  = %p\n", cp, cp);
    cp = "Geeta";
    printf("Value = %s\tAddress  = %p\n", cp, cp);
    printf("Value = %s\tAddress  = %p\n","Seema", "Seema");
    
    
    return EXIT_SUCCESS;
}
