/****************************************************************************
 *                                                                          *
 * File    : 163_malloc_vs_calloc.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

// difference between malloc() and calloc()
// Run under codeblock to see the difference
#include<stdio.h>
#include<stdlib.h>
#include <inttypes.h>

void malloc_demo(void);
void calloc_demo(void);

int main() {
   // malloc_demo();
    calloc_demo();
    return EXIT_SUCCESS;
}

void malloc_demo(void) {

    int idx;
    const size_t number_of_variables = 5;
    
    char *ptr = (char *) malloc(sizeof (char) * number_of_variables);
    if (ptr == NULL) {
        fprintf(stderr, "\nInsufficient memory ");
        exit(EXIT_FAILURE);
    }
    printf("Array is created from address %p = %"PRIuPTR"\n ", ptr, ptr);
    idx = 0;
    printf("Contents of memory allocated using malloc\n");
    while (idx < number_of_variables) {
        printf("Character = %c => %d\n", *(ptr + idx), (int) *(ptr + idx));
        idx++;
    }
    //release the block of memory allocated
    if (ptr != NULL) {
        free(ptr);
        ptr = NULL;
    }
}

void calloc_demo(void) {
    int idx;
    char *ptr = NULL;
    const size_t number_of_blocks = 5;
    
    ptr = (char*) calloc(number_of_blocks, sizeof (char));

    if (ptr == NULL) {
        fprintf(stderr, "Insufficient memory \n");
        exit(EXIT_FAILURE);
    }
    printf("Array is created from address %p =  %"PRIuPTR"\n", ptr, ptr);
    idx = 0;
    printf("Contents of memory allocated using calloc\n");
    while (idx < number_of_blocks) {
        printf("Character = %c = %d\n", *(ptr + idx), (int)*(ptr + idx));
        ++idx;
    }

    //release the block of memory allocated

    if (ptr != NULL) {
        free(ptr);
        ptr = NULL;
    }
}

