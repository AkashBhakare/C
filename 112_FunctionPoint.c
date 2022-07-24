/****************************************************************************
 *                                                                          *
 * File    : 112_FunctionPoint.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * Application :
 * Store functions in Array (data structure)
 * function returning function
 */
#include <stdio.h>
#include <stdlib.h>

#define ADDITION        1
#define SUBSTRACTION    2
#define MULTIPLICATION  3
#define DIVISION        4

long double add(int, int);
long double sub(int, int);
long double divide(int, int);
long double multi(int, int);

int getMenuChoice(void);

typedef long double (*fptrOperation)(int,int);

/*Function returning function (Pointer to function)*/
fptrOperation newMenu() {
    fptrOperation operations[4]= {add, sub, multi, divide}; //Array of Pointer to function
    int choice;
    printf("***** New Operations Menu ****\n ");
    printf("\t1) Addition\n");
    printf("\t2) Subtraction\n");
    printf("\t3) Multiplication\n");
    printf("\t4) Division\n");
    printf("\n\tEnter your choice(1/2/3/4) :");
    scanf("%d", &choice);
    return operations[choice-1]; // returning address of function
}

//int main() {
//    int n1 = 10;
//    int n2 = 3;
//    long double result;
//    int choice;
//    choice = getMenuChoice();
//    switch (choice) {
//        case ADDITION:
//            result = add(n1, n2);
//            break;
//        case SUBSTRACTION:
//            result = sub(n1, n2);
//            break;
//        case MULTIPLICATION:
//            result = multi(n1, n2);
//            break;
//        case DIVISION:
//            result = divide(n1, n2);
//            break;
//    }
//    printf("\tResult = %.2Lf\n\n", result);
//    return 0;
//}

//Using Pointer to function
int main() {
    int n1 = 10;
    int n2 = 3;
    long double result;
    int choice;
    fptrOperation ptr_to_func;
    ptr_to_func = newMenu();
    result = ptr_to_func(n1,n2);
    printf("Result = %Lf\n",result);
    return 0;
}

int getMenuChoice() {
    int choice;
    printf("***** Old Operations Menu ****\n ");
    printf("\t1) Addition\n");
    printf("\t2) Subtraction\n");
    printf("\t3) Multiplication\n");
    printf("\t4) Division\n");
    printf("\n\tEnter your choice(1/2/3/4) :");
    scanf("%i", &choice);
    return choice;
}

long double add(int a, int b) {
    return (long double) a + b;
}

long double sub(int a, int b) {
    return (long double) a - b;
}

long double multi(int a, int b) {
    return (long double) a*b;
}

long double divide(int a, int b) {
    return (long double) a / b;
}
