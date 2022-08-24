/****************************************************************************
 *                                                                          *
 * File    : 138_Defining_2D_Array.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/


/*
 * Defining_2D_Array
 * Initializing 2D array
 * Accessing 2D array
 * Passing 2D array to function
 */

#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void defining_2d_array(void);
void print_array(int [][COLS], const char* message);

int main(void) {
    defining_2d_array();
    return EXIT_SUCCESS;
}

void defining_2d_array(void) {

    {
        /* Method1
         * Creates array of size ROWS X COLS; since its not initialized
         * the elements store unexpected values (Garbage)
         */
        int array[ROWS][COLS];
        print_array(array, "Method 1");
    }

    {
        /*
         * Method-2
         * Each element in the array is initialized with the elements in the
         * set of initializers
         */
        int array[ROWS][COLS] = {
            { 34, 56, 67, 3},
            { 21, 4, 55, 40},
            { 10, 20, 30, 5}
        };
        print_array(array, "Method 2");
    }

    {
        /*
         * Method-3
         * Each element in the array is initialized with the elements in the
         * set of initializers; if any element in the row is initialzed then 
         * rest of the elements in that row are set to zero
         */
        int array[ROWS][COLS] = {
            { 34, 56, 67},
            { 21, 4},
            { 10}
        };
        print_array(array, "Method 3");

    }

    {
        /*
         * Method-4
         * Each element in the array is initialized with the corresponding 
         * elements in the set of initializers; 
         * if any row is initialzed then rest of the row are set to zero
         */
        int array[ROWS][COLS] = {
            { 34, 56, 67},
            { 21, 4},
        };
        print_array(array, "Method 4");

    }

    {
        /*
         * Method-5
         * All set to 0
         * If any element in the array is initialized then rest all elements
         * are set to zero
         */
        int array[ROWS][COLS] = {
            {0}
        };
        print_array(array, "Method 5");

    }

    {
        /*
         * Method-6
         * If the number of Rows is not specified then the number of set of
         * initializers will determine the number of rows
         */
        int array[][COLS] = {
            { 34, 56, 67, 3},
            { 21, 4, 55, 40},
            { 10, 20, 30, 5}
        };
        print_array(array, "Method 6");
    }

    {
        /* Incorrect ways
         int array1[][] = {
            { 34, 56, 67, 3},
            { 21, 4, 55, 40},
         };
         
        int array2[ROWS][] = {
            { 34, 56, 67, 3},
            { 21, 4, 55, 40},
         }; */
    }

}

void print_array(int a[][COLS], const char* message) {
    printf("\nThe Content of the array are as follows: %s\n", message);
    for (size_t row = 0; row < ROWS; row++) {
        for (size_t col = 0; col < COLS; col++) {
            printf("%4d", a[row][col]);
        }
        printf("\n");
    }
    return;
}
