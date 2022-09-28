/****************************************************************************
 *                                                                          *
 * File    : 162_Realloc.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/*
 * realloc()
 */
#include <stdio.h>
#include <stdlib.h>
/*Creates an integer array of size number_of_students and returns the pointer to that array*/
int* create_int_array(size_t number_of_students);
void print_marks(int * pointer_to_array, size_t number_of_students);
void accept_marks(int *pointer_to_array, size_t number_of_students);
int * resize_int_array(int *pointer_to_array, size_t newsize);

int main() {
    size_t number_of_students;
    size_t additionalStudents;
    int *marks; //pointer to integer
    printf("Please enter the number of students:");
    scanf("%u", &number_of_students);
    
    marks = create_int_array(number_of_students);
    accept_marks(marks, number_of_students);
    print_marks(marks, number_of_students);
    
    printf("Please enter the number of additional students:");
    scanf("%i", &additionalStudents);
    //    calculate the new size of memory block(Array)
    size_t memoryBlockSize = sizeof (int)*(additionalStudents + number_of_students);
    marks = resize_int_array(marks, memoryBlockSize);
    accept_marks((marks + number_of_students), additionalStudents);
    print_marks(marks, number_of_students + additionalStudents);
    free(marks); //release the memory
    marks = NULL; //ensure dangling pointer is not created
    return EXIT_SUCCESS;
}

int* create_int_array(size_t number_of_students) {
    //    Create a Array large enough to store  marks of all the students
    int * marks = (int*) calloc(number_of_students, sizeof (int));
    printf("Memory allocated at address %p\n", marks);
    if (marks == NULL) //if allocation has failed
    {
        fprintf(stderr, "Insufficient Memory!\n");
        exit(EXIT_FAILURE); //terminate the program
    }
    return marks;
}

void print_marks(int * pointer_to_array, size_t number_of_students) {
    //    Proceed if allocation is successful
    if (pointer_to_array != NULL) {
        printf("Marks of %zu students are as follows:\n", number_of_students);
        for (int idx = 0; idx < number_of_students; idx++) {
            printf("Student No. %d :", (idx + 1));
            printf("\tMarks = %d\n", *(pointer_to_array + idx));
        }
    }
}

void accept_marks(int *pointer_to_array, size_t number_of_students) {
    //    Proceed if allocation is successful
    if (pointer_to_array != NULL) {
        printf("Please enter marks of %zu students:\n", number_of_students);
        for (int idx = 0; idx < number_of_students; idx++) {
            printf("Student No. %d :", (idx + 1));
            scanf("%i", (pointer_to_array + idx));
        }
    }
    return;
}

int * resize_int_array(int *pointer_to_array, size_t newsize) {
    //   Attempt to resize the block of memory
    pointer_to_array = (int*)realloc(pointer_to_array, newsize);
    printf("Address after calling realloc %p\n", pointer_to_array);
    if (pointer_to_array == NULL) {
        fprintf(stderr, "Memory Reallocation has failed!\n");
        free(pointer_to_array); //delete the original array
        exit(EXIT_FAILURE); //terminate the program
    }
    return pointer_to_array;
}
