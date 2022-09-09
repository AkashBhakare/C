/****************************************************************************
 *                                                                          *
 * File    : 147_VAL.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void vlaDemo(void);
void process1(size_t size);
void process2(size_t size);

int main() {
    vlaDemo();
    
    int size; //variable and not a constant
    printf("Please enter the number of elements you want to store :");
    scanf("%i", &size);
//    process1(size);
//    process2(size);
//   
    return EXIT_SUCCESS;
}

void vlaDemo() {
    int i = 1;
    //The size of each VLA instance does not change during its lifetime,
    char a1[i+10];
    ++i;
    do {
        //but on another pass over the same code, it may be allocated 
        //with a different size.
        char a2[i*5];
        ++i;
        printf("size of a1 = %zu\n", sizeof (a1));
        printf("size of a2 = %zu Address = %p\n", sizeof (a2),a2);

    } while (i <= 5);
   // printf("last sizeof a2 = %zu\n", sizeof (a2));
}

/*
 * The correct amount of storage for a VLA is 
 * automatically allocated when the block containing 
 * the array is entered and the declaration of the VLA 
 * is reached; the storage is automatically deallocated 
 * when leaving the block. Thus, VLAs can simplify storage 
 * management of programs since some uses that required 
 * manual use of malloc and free in C90 can be replaced 
 * by VLAs. 
 */
void process1(size_t n) {
    // Set up a buffer of n characters
    char *b = (char*) malloc(n*sizeof(char));
    // do the work
    //  ...
    // free the buffer
    free(b);
}

/*Life time of VLA is controlled by the function*/
void process2(size_t size) {
    // Set up a buffer of n characters
    char b[size];
    // do the work
    //...
}
