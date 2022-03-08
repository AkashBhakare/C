#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
int main() {
    //assigns value (5.0 + 3.0i)
    float _Complex voltage = 5.0F + 3.0F*I; 
    
     //requires complex.h
    float complex current  = 5.5F + 3.4F*I;
    double complex value = 5.6 + 6.6*I;
    long double complex z = 5.6L + 6.6L*I;
   
     
    printf("(%.2f,%.2f)\n ", creal(value), cimag(value));
    return EXIT_SUCCESS;
}  
