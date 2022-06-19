/****************************************************************************
 *                                                                          *
 * File    :91_PointerBasice                                                *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           19/06/2022  Created                                            *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
//introduction to pointers

/*
 uintptr_t :unsigned integer type capable of holding a pointer
 */
int main(void) {
    int i = 10; // defining a integer variable
    int j = 20; // defining & initialization
    uintptr_t k = 0U; //unsigned integer type capable of holding a pointer
    //defining a pointer to integer variable
    int* ptr1 = NULL;
    //defining & initialization of pointer to integer
    int* ptr2 = &j;
    char ch = 'A';
    //defining a pointer to a character variable
    char *cptr = NULL;

    printf("Size of int       :%zu bytes\n", sizeof (i));
    printf("Size of uintptr_t :%zu bytes\n", sizeof (k));

    printf("Size of int*  :%zu bytes\n", sizeof (ptr1));
    printf("Size of char* :%zu bytes\n", sizeof (cptr));


    //    assignment
    //   k = &j; // illegal
    k = 4294953920UL; // valid

    //    ptr1 = 4294953920UL; // illegal
    ptr1 = &j; //valid

    //    next 2 are  illegal expressions  but allowed

    //  converting unsigned int to int*
    ptr1 = (int*) 4294953920UL; //converting value to address

    //converting int* to int i.e. converting address to value
    k = (uintptr_t) & j;

    ptr1 = &i; // assignment;
    i = 10;
    j = 20;

    printf("i: %d\n", i);
    printf("Address of i : %"PRIuPTR" = %p\n", (uintptr_t) & i, &i);

    printf("j: %d\n", j);
    printf("Address of j : %"PRIuPTR" = %p\n", (uintptr_t) & j, &j);

    printf("Address of ptr1 : %"PRIuPTR" = %p\n", (uintptr_t) & ptr1, &ptr1);
    printf("Address of ptr2 : %"PRIuPTR" = %p\n", (uintptr_t) & ptr2, &ptr2);
    printf("Value of ptr1: %"PRIuPTR" = %p\n", (uintptr_t) ptr1, ptr1);
    printf("Value of ptr2: %"PRIuPTR" = %p\n", (uintptr_t) ptr2, ptr2);
    //De-referencing a pointer
    printf("Value at address stored in ptr1: %d\n", *ptr1);
    printf("Value at address stored in ptr2: %d\n", *ptr2);

    // pointer is unchanged but the value stored at
    // the address stored in the pointer has changed
    *ptr1 = *ptr1 * 10;

    printf("Value at address stored in ptr1: %d\n", *ptr1);
    printf(" i: %d\n", i);

    ++*ptr1;
    printf("Value at address stored in ptr1: %d\n", *ptr1);
    printf(" i: %d\n", i);

    ptr2++;
    printf("Value of ptr2: %"PRIuPTR" = %p\n", (uintptr_t) ptr2, ptr2);
    printf("Value at address stored in ptr2: %d\n", *ptr2);

    ptr2--;
    printf("Value of ptr2: %"PRIuPTR" = %p\n", (uintptr_t) ptr2, ptr2);

    printf("*ptr1 - * ptr2 = %d\n", (int) (*ptr1 - *ptr2));
    printf("ptr1 -  ptr2 = %"PRIuPTR"\n", (uintptr_t) (ptr1 - ptr2));

    printf("\nValue of ptr2: %p %"PRIuPTR"\n", ptr2, (uintptr_t) ptr2);
    printf("Value at address stored in ptr2: %d\n", *ptr2);
    printf("Value : %d\n", *ptr2++);
    printf("Value at address stored in ptr2: %d\n", *ptr2);

    printf("\nValue : %d\n", (*ptr2)++);
    printf("Value at address stored in ptr2: %d\n", *ptr2);
    printf("Value of j: %d\n", j);

    //pointer comparison
    if (ptr1 >= ptr2) // legal
    {
        printf("ptr1 >= ptr2");
    } else {
        printf("ptr1 < ptr2");
    }

    printf("\n%"PRIuPTR"\n", (uintptr_t) & ch);
    printf("\t%"PRIuPTR"\n", (uintptr_t) & cptr);
    cptr = &ch;

    //    if (cptr > ptr2) // illegal
    //    {
    //        printf("cptr > ptr2");
    //    } else {
    //        printf("cptr < ptr2");
    //    }

    //pointer arithmetic
    //printf("\t%"PRIuPTR"\n", (char*) ptr1 - cptr); //
    //printf("alignment of char   = %d\n", __alignof__ (char));
    //printf("alignment of int    = %d\n", __alignof__ (int));
    //printf("alignment of double = %d\n", __alignof__ (double));
    return (EXIT_SUCCESS);
}

