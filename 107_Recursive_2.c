/****************************************************************************
 *                                                                          *
 * File    : 107_Recursive_2.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           22/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

/*
 * Demonstration of recursive functions
 */

void asc(int); //nonrecursive
void ascrec(int); //recursive

void desc(int); //nonrecursive
void descrec(int); //recursive

int main(void) {
    int n;
    printf("Please enter a integer : ");
    scanf("%i", &n);
 

    printf("Numbers in Ascending order are as follows" \
	" (using nonrecursive function ):\n ");
    asc(n);
    printf("Numbers in Ascending order are as follows" \
	" (using recursive function ): \n");
    ascrec(n);

//    printf("Numbers in Descending order are as follows" \
//	" (using nonrecursive function ):\n ");
//    desc(n);
//    printf("Numbers in Descending order are as follows" \
//	" (using recursive function ): \n");
//    descrec(n);
    return 0;
}

// nonrecursive function
void asc(int limit) {
    unsigned int cnt;
    for (cnt = 1U; cnt <= limit; cnt++)
    {
        printf("\t%u\n", cnt);
    }
    return;
}

// recursive function
void ascrec(int limit) {
    if (limit > 1)
    {
        ascrec(limit - 1);
    }
    printf("\t%d\n", limit);
    return;
}

// non recursive function
void desc(int limit) {
    for (; limit > 0; limit--)
    {
        printf("\t%d\n", limit);
    }
    return;
}

// recursive function

void descrec(int limit) {
    if (limit >= 1)
    {
        printf("\t%d\n", limit);
        descrec(limit - 1);
    }
    return;
}
