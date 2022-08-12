/****************************************************************************
 *                                                                          *
 * File    : 124_functionPrototypeScope.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           29/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcSimpleInterest(float, float, int);
float calcCompoundInterest(float principle_amount, float Interest_rate, int years);

int main(void) {
    float si = calcSimpleInterest(100000.0F, 10.0F, 4);
    printf("Simple Interest = Rs %.2f\n", si);
    float ci = calcCompoundInterest(100000.0F, 10.0f,  4);
    printf("Compound Interest = Rs %.2f\n", ci);
    return(EXIT_SUCCESS);
}

float calcSimpleInterest(float principleAmt,float interest, int no_years){
    return principleAmt * interest * no_years /100;
}

// (p*(1+ r/100)^n) - p
float calcCompoundInterest(float principleAmt,float interest, int no_years){
    float temp = pow((1+interest/100),no_years);
    return principleAmt*temp - principleAmt;
}
