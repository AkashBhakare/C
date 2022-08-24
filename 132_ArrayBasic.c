/****************************************************************************
 *                                                                          *
 * File    : 132_ArrayBasic.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include <inttypes.h>

int main(void) {

    int k = 2;
    #define SIZE 5
    int array[SIZE] = {10, 20, 30, 40, 50};

    /* Name of an array in C/C++ refers to its address
     * Address of the first element in the array is same as that of the array */
    printf(" Address of the Array = %p %"PRIuPTR"\n", array, array);
    printf(" Address of first element = %p %"PRIuPTR"\n", &array[0], &array[0]);
    
    int* ptr = array;
    printf(" Address of first element = %p %"PRIuPTR"\n",ptr, ptr);
    ptr = &array[0];
    printf(" Address of first element = %p %"PRIuPTR"\n", ptr, ptr);
    
    int i = 1; //Since C99 variables can be defined anywhere in the code block
    printf(" Value of second element = %d\n", array[i]);
    printf(" Value of second element = %d\n", i[array]);
    printf(" Value of third element  = %d\n", k[array]);

    array[6] = 22;
    printf(" Value at 7th position = %d\n", array[6]);
    array[-1] = 99;
    printf(" Value at -1 position = %d\n", array[-1]); 
   
    printf(" Address of array = %p\n", ptr);
    printf(" Value at 1st element = %d\n", *(ptr + 0));
    printf(" Value at 1st element = %d\n", *(array + 0));
    printf(" Value at 2st element = %d\n", array[1]);
    printf(" Value at 2st element = %d\n", ptr[1]);
   
    return EXIT_SUCCESS;
}
