/****************************************************************************
 *                                                                          *
 * File    : 166_Handling_Failure.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

// Handling memory failure
#include<stdio.h>
#include<stdlib.h>
#include <inttypes.h>


void allocation_failure(void);

int main() {
    allocation_failure();
    return EXIT_SUCCESS;
}

void allocation_failure(void){
    const size_t NO_OF_POINTERS = 5000;
    /*Array of pointer to integers*/
    double * array[NO_OF_POINTERS];
    int counter = 0;
    while(counter < NO_OF_POINTERS){
        /*Create an array of 10,00,000 double ie 100,00,000 bytes*/
        array[counter] =  (double*)calloc(1000000,sizeof(double));
        if(array[counter]==NULL){
            printf("%d dynamic array creation failed\n",counter);
            break;
        }
        printf("%d array has been created at address %p\n",counter,array[counter]);
        counter++;
    }
    do{
        counter--;
        printf("%d array is destroyed\n",counter);
        free(array[counter]);
    }while(counter >= 1);
    return;
}
