/****************************************************************************
 *                                                                          *
 * File    : 75_For_Ascending                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*
 * print integers in ascending order 1..n
 */
/*
int main(void){
    int counter;
    int limit;
    printf("Please enter a integer : ");
    scanf("%i", &limit);
    counter = 1;
    printf("Integers in the range of 1 to %d in ascending order are:\n", limit);
    while(counter <= limit){
        printf("\t%d\n", counter);
        ++counter;
    }
    return EXIT_SUCCESS;
}
*/

int main(void) {
    unsigned int counter;
    int limit;
    printf("Please enter a integer : ");
    scanf("%i", &limit);
    for (counter = 1U; counter <= limit; ++counter)
    {
        printf("Value = %u\n",counter);
    }
    return (EXIT_SUCCESS);
}
