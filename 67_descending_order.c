/****************************************************************************
 *                                                                          *
 * File    :67_descending_order                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 Print integers in descending order from 1 to n : (n is +ve integer)
 */

int main(void){
    unsigned int limit;
      
    printf("Please enter an integer : ");
    scanf("%u", &limit);
    
    printf("The integers in descending order in the range of %u to 1 are as"\
            " follows\n",limit);
    
    while(limit > 0){
        printf("\t%u\n",limit);
        --limit;
    }
    
    return EXIT_SUCCESS;
}

