/****************************************************************************
 *                                                                          *
 * File    : 95_Call_by_reference                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           26/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* without using library function */
int max_int(float);
int min_int(float);
/* by using library function */
int getmin(float);
int getmax(float);
void minmax(float, int*, int*);
int main() {
    int max;
    int min;
    float floatVar;
    printf("Please enter a real value : ");
    scanf("%f", &floatVar);
    printf("Largest Integer = %d\n", max_int(floatVar));
    printf("Smallest Integer = %d\n", min_int(floatVar));
    printf("Largest Integer = %d\n", getmax(floatVar));
    printf("Smallest Integer = %d\n", getmin(floatVar));
    minmax(floatVar, &max, &min);
    printf("Largest Integer (minmax) = %d\n", max);
    printf("Smallest Integer(minmax) = %d\n", min);
    return 0;
}

int max_int(float f){
    if(f >0) {
        return (int)f;
    }
    return (int)f-1;
    
}

int min_int(float f){
    int min =  (int)f;
    if (f>0){
        return min+1;
    }
    return min;
    
}

int getmax(float f){
    return floor(f);
}

int getmin(float f){
    return ceil(f);
}

void minmax(float farg, int *p_max, int *p_min){
    *p_max = floorf(farg);
    *p_min = ceilf(farg);
    return;
}

//Without using library functions
void maxmin2(float floatVar, int * pmax, int *pmin) {
    *pmax = (int) floatVar;
    if ((float) *pmax < floatVar) {
        *pmin = *pmax + 1;
    }
    else {
        *pmin = *pmax;
    }
    return;
}

//using standard library functions
void maxmin1(float floatVar, int *pmax, int *pmin){
//    computes smallest integer not less than the given value 
    *pmin = ceil(floatVar);
//    computes largest integer not greater than the given value 
    *pmax = floor(floatVar);
    return;
}
