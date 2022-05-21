/****************************************************************************
 *                                                                          *
 * File    :66_Ascending_order                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/*
 Print integers in ascending order from 1 to n : (n is +ve integer)
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned int limit;
    unsigned int counter = 1;
    
    printf("Please enter an integer : ");
    scanf("%u", &limit);
    
    printf("The integers in ascending order in the range of 1 to %u are as follows\n",limit);
    
    while(counter <= limit){
        printf("\t%u\n",counter);
        ++counter;
    }
    
    return EXIT_SUCCESS;
}
