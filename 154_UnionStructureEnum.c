/****************************************************************************
 *                                                                          *
 * File    : 154_UnionStructureEnum.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/* In order to know which union field is actually stored, 
 * unions are often nested inside of structs, with an enumerated 
 * type indicating what is actually stored there. 
 */
int main(void) {

    typedef struct Flight {

        enum {
            PASSENGER, CARGO
        } type;

        union {
            int npassengers;
            double tonnages; // Units are not necessarily tons.
        } cargo;
    } Flight;

    Flight flights[ 100 ];

    flights[ 42 ].type = PASSENGER;
    flights[ 42 ].cargo.npassengers = 150;

    flights[ 20 ].type = CARGO;
    flights[ 20 ].cargo.tonnages = 356.78;
    return EXIT_SUCCESS;
}
