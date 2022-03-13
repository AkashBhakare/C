/****************************************************************************
 *                                                                          *
 * File    : fgets_fputsDemo.c                                              *
 * Author  : Akash Bhakare                                                  *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
* *                                                                         *
 * History : Date      Reason                                               *
 *           12/02/2022  Created                                            *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

/*
 * Exploring getchar() and putchar()
 */
int main(void) {
    
    char ch1;
    char ch2; 
       
    ch1 = getchar();    //Accept a single character
    putchar(ch1);       //Display a character on console

    fflush(stdout);
    
    while(getchar()!=10); //Clear input stream
    
    ch2 = getchar();
    putchar(ch2);
    fflush(stdout);
   
    return (EXIT_SUCCESS);
}
