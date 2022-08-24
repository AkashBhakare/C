/****************************************************************************
 *                                                                          *
 * File    : 131_Single_dimensional_array.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           04/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * Different ways to define and initialize Single dimensional array of integers 
 */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
void show_array_content(int array[], size_t size);

int main(void) {
    const size_t size = 5; //Constant variable
    
    //Method -II
    /*Creates a group of 5 integers holding garbage values*/
    //int array[size];        
    
    /* error: variable-sized object may not be initialized 
     * variables are runtime concepts 
     * but array size needs to be specified at compile time
     */
    //int array[size] = {10,20,30,40,55};
    
    /* error: array size missing in 'array'*/
   // int array[]; 
    
    
    //Method-II
#define SIZE 5 //Macro defining constant
    /*Macro substitution happens before compilation (C Preprocessor)*/
    /* Creates a array of 5 integers.
     * Each variable in the array is initialized by the corresponding integer
     * from the set of initializers  */
    //int array[SIZE] = {10,20,30,40,55};
    
    
    /* If the array size is not specified then that array has to be initialized;
     * The number of initializers determine the size of the array
     */
    int array[] = {11,22,33,44,55};
    
    
    show_array_content(array, size);
    return 0;
}

void show_array_content(int arr[], size_t size){
    printf("The elements of the array are as follows :\n");
    for(size_t idx = 0; idx < size; ++idx){
        printf("element number %d = %-12d is Stored at address %"PRIuPTR"\n",
                (idx+1), arr[idx], &arr[idx]);
    }
    return;
    
}
