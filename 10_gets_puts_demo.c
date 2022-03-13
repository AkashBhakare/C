/****************************************************************************
 *                                                                          *
 * File    : gets_putsdemo.c                                              *
 * Author  : Akash Bhakare                                                  *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
* *                                                                         *
 * History : Date      Reason                                               *
 *           12/02/2022  Created                                            *
 *                                                                          *
 ****************************************************************************/
/*
* Handling string using gets() & puts()
*/
#include <stdio.h>
#include <stdlib.h>

/*
 * Reading and Writing Strings
 */
int main(void) {
    /*character array of size 100*/
    char name[10];
    
    /*Argument passed is a String literal (const char *) */
    puts("What's your name ?:"); // Send the series of characters to stdout
    
    /*Extract series of characters from stdin until \n is not encountered*/
    gets(name);
    
    /*Argument passed is a String literal (const char *) */
    puts("Hello");
    
    /*Argument passed is a Character Array containing String (char *) */
    puts(name);
    
    puts("the end");
    return (EXIT_SUCCESS);
}
