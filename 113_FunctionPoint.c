/****************************************************************************
 *                                                                          *
 * File    : 113_FunctionPoint.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/* Function returning Pointer */
#include <stdio.h>
#include <stdlib.h>

long long int add(int num1, int num2) {
    return (long long)num1 + num2;
}

long long int subtract(int num1, int num2) {
    return (long long)num1 - num2;
}

//The function pointer to be used is declared 
//using a type definition
typedef long long int (*fptrOperation)(int, int);

/* Function returning a Pointer to function*/
fptrOperation select(char opcode) {
    switch (opcode) {
        case '+': return add;
        case '-': return subtract;
    }
}

int evaluate(char opcode, int num1, int num2) {
    fptrOperation operation = select(opcode);
    //Call the returned function
    return operation(num1, num2);
}

int main() {
    printf("Addition : %d\n", evaluate('+', 5, 6));
    printf("Subtraction : %d\n", evaluate('-', 5, 6));
}
