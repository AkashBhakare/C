/****************************************************************************
 *                                                                          *
 * File    : 134_String_Introduction.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           11/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * Understanding String literal
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  defining_strings();

int main(void) {
    defining_strings();
    return (EXIT_SUCCESS);
}

/*Every string is a character array but every character array is not a string*/
void  defining_strings(){
    /*Character array initialized with string literal*/
    char s1[10] = "Hello";
    /* sizeof returns the amount of memory allocated for the array 
     * and not the length of the string
     */
    printf("Size of s1 : %zu bytes\n", sizeof(s1)); 
    
    /*Character array initialized with set of character constants/literal */
    char s2[10] = {'H','e','l','l','o'};
    printf("Size of s2 : %zu bytes\n", sizeof(s2)); 
    
    /*If we do not specify the size of the array at compile time it 
     * is necessary to initialize such an array
     * The initializers determine the size of the array
     */
    char s3[] = "Hello"; /* String terminator \0 is introduced at the end */
    printf("Size of s3 : %zu bytes\n", sizeof(s3)); 
    
    char s4[] = {'H','e','l','l','o'};
    printf("Size of s4 : %zu bytes\n", sizeof(s4)); 
    
    /*Defining String using pointers*/
    const char* sptr1 = "HELLO"; /*String literal represents address*/ 
    printf("Address stored in sptr = %p & value at that address = %s\n",
            sptr1, sptr1);
    printf("Address of String literal = %p & value at that address = %s\n",
            "Hello", "Hello");
    /* sptr[1] = *(sptr+1)*/
    printf("Second character from the string \"HELLO\" = %c\n", sptr1[1] );
    printf("Second character from the string \"Hello\" = %c\n", "Hello"[1] );
    
}



