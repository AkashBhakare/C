/****************************************************************************
 *                                                                          *
 * File    : 49_Ifelse_SelesCommission                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           30/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/* Accept total sales and calculate the  commission to be paid.
 * Commission of 5% of total sales is paid if the sales are greater 
 * than or equal to Rs 1 Lakh
 * Commission of 2% of total sales is paid if the sales are less than Rs 1 Lakh
 */ 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float sale; //stores total sales
    float commission; //stores commission to be paid
    const int SALES_TARGET    = 100000; // Sales target
    const float MAX_COMM_RATE = 0.05F;  // maximum commission of 5%
    const float MIN_COMM_RATE = 0.02F;  // minimum commission of 2%
    
    printf("Please enter the total sales in Rs:");
    scanf("%f", &sale);

    /* check if the sales is greater than 
     * or equal to sales target */
    if (sale >= SALES_TARGET) 
        commission = sale * MAX_COMM_RATE;
    else 
        commission = sale * MIN_COMM_RATE;

    printf("The commission is Rs %.2f\n", commission);
    return (EXIT_SUCCESS);
}

