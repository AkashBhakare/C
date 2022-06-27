/****************************************************************************
 *                                                                          *
 * File    : 94_minmax                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/06/2022  Created                                            *
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
int main() {
    float floatVar;
    printf("Please enter a real value : ");
    scanf("%f", &floatVar);
    printf("Largest Integer = %d\n", max_int(floatVar));
    printf("Smallest Integer = %d\n", min_int(floatVar));
    printf("Largest Integer = %d\n", getmax(floatVar));
    printf("Smallest Integer = %d\n", getmin(floatVar));
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

