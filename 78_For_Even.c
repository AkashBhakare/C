/****************************************************************************
 *                                                                          *
 * File    : 78_For_Even                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// display first n even numbers.
/*
int main() {
    unsigned int counter;
    int limit;
    unsigned int even = 0U;
    
    printf("How many even numbers do you want? ");
    scanf("%i", &limit);
    
    printf("First %d even numbers are :\n", limit);
    for (counter = 1U; counter <= limit; counter++)
    {
        printf("\t%u\n", even);
        even = even + 2U;
    }
    return (EXIT_SUCCESS);
}
*/

//Alternative
/*
int main() {
    unsigned int counter;
    int limit;
    unsigned int even;
    
    printf("How many even numbers do you want? ");
    scanf("%i", &limit);

    printf("First %d Even numbers are as follows\n",limit);
    
    for (even = 0U, counter = 1U; counter <= limit; ++counter) 
    {
        printf("\t%u\n", even);
        even += 2U;
    }
    return (EXIT_SUCCESS);
}
*/

//Alternative

//int main() {
//    unsigned int counter;
//    int limit;
//    unsigned int even;
//    
//    printf("How many even numbers do you want? ");
//    scanf("%i", &limit);
//
//    printf("First %d Even numbers are as follows\n", limit);
//    for (even = 0U, counter = 1U; counter <= limit; ++counter, even += 2U)
//    {
//        printf("\tEven No %u = %u\n",counter , even);
//    }
//    return (EXIT_SUCCESS);
//}

//Alternative

int main(void) {
    unsigned int counter;
    int limit;
    
    printf("How many even numbers do you want? ");
    scanf("%i", &limit);
    
    printf("The first %d even numbers are:\n",limit);
    
    for (counter = 0U; counter < limit; ++counter)
    {
        printf("\t\t %u\n", (counter * 2U)); //(counter << 1) );
    }
    
    return (EXIT_SUCCESS);
}
