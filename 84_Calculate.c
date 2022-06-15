/****************************************************************************
 *                                                                          *
 * File    :76_for_Factorial                                                *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/05/2022  Created                                            *
 *                                                                          *
 ****************************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int getInteger(const char*);
long long int addition(int, int);
long long int multiplication(int, int);
unsigned int factorial(int n);


int main() {
    int n1;
    int n2;
	int n;
    long long int result;

    n1 = getInteger("Please enter the first integer : ");

    n2 = getInteger("Please enter the second integer : ");

    result = addition(n1,n2);
    printf("%d + %d = %lld\n", n1, n2, result);

    result = multiplication(n1,n2);
    printf("%d * %d = %lld\n", n1, n2, result);

   printf("Please Enter a number: ");   
   scanf("%i",&n);

   printf("Factorial of %d is %d\n", n, factorial(n));
   return 0;
}

int getInteger(const char *msg) {
    bool is_scan_success = false;
    int number;
    do {
        printf("%s",msg);
        is_scan_success = scanf("%i", &number);
        if (is_scan_success == false) {
            fprintf(stderr, "Invalid input supplied\n");
            fflush(stderr);          //clear the error stream   
            while (getchar() != 10); //clear the input stream
        }
    } while (is_scan_success != true);
 
    return number;
}

long long int addition(int num1, int num2){
    return (long long int)num1 + num2;
}


long long int multiplication(int num1, int num2){
    return (long long int)num1 * num2;
}

unsigned int factorial(int n) {
   int number = 1, fact; 
   for (fact = 1; fact <= n; fact++)
       number *= fact;
  
   return number;
}

