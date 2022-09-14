/****************************************************************************
 *                                                                          *
 * File    : 152_Union.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
 * Unions are sometimes also used to break up larger data items into 
 * smaller pieces, such as this code to extract four 8-bit bytes 
 * from a 32-bit int:
 */
typedef union {
    unsigned int n;
    unsigned char c[ 4 ];
} DATA;

int main(void) {
    int nRead = INT32_MAX;

    DATA data;

    data.n = nRead;
    for (int i = 0; i < 4; i++){
        printf("Byte number %d of %d is %d\n", i, nRead, data.c[ i ]);
    }
    return EXIT_SUCCESS;
}
