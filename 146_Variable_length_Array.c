/****************************************************************************
 *                                                                          *
 * File    : 146_Variable_length_Array.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * Since C99, the bounds of an array can now be a run-time expression. 
 * Such arrays are called variable length arrays or VLAs for short. 
 * VLAs can simplify storage management in a program and allow the use of the 
 * normal array notation even when the problem to be solved requires 
 * arrays to have different sizes at different times. 
 */
#include <stdio.h>
#include <stdlib.h>
/* If the size is *, the declaration is for a VLA of unspecified size. 
 * Such declaration may only appear in a function prototype scope, 
 * and declares an array of a complete type. In fact, all VLA declarators 
 * in function prototype scope are treated as if expression were replaced by *.
 */
void print_vla(size_t x, int a[*]);
void accept_data(size_t x, int a[*]);

int main() {
    int size; //variable and not a constant
    printf("Please enter the number of elements you want to store :");
    scanf("%i", &size);
    int a[size]; //Variable length array
    printf("Size of the array is %zu bytes\n", sizeof (a));
    printf("Please enter %d integers:\n", size);
    accept_data(size, a);
    print_vla(size, a);
    size += 5;
    printf("Size of array : %zu bytes\n", sizeof (a));
    return EXIT_SUCCESS;
}

void accept_data(size_t x, int a[x]) {
    for (size_t i = 0; i < x; ++i) {
        printf("Integer No %zu : ", i + 1);
        scanf("%i", &a[i]);
    }
}

void print_vla(size_t x, int a[x]) {
    // printf("Array Size = %zu Bytes (in (foo))\n", sizeof(a)); // same as sizeof(int*) 
    for (int i = 0; i < x; i++) {
        printf("Integer No %d = %d\n", i + 1, a[i]);
    }
}
