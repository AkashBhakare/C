/****************************************************************************
 *                                                                          *
 * File    : 80_Dowhile                                                  *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           05/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "stdbool.h"
#include <limits.h>

/*
 * Examples of Do While Loop
 */

//int main() {
//    char wish = 'Y' ; //Initialization necessary
//    int n1;
//    int n2;
//    long long int sum;
//
//    //condition is pre-checked 
//    while (toupper(wish) == 'Y') {
//        printf("Enter First integers : ");
//        scanf("%i", &n1);
//        printf("Enter Second integers : ");
//        scanf("%i", &n2);
//        sum = (long long) n1 + n2;
//        printf("%d + %d = %lld\n", n1, n2, sum);
//        while (getchar() != 10); //to clear stdin
//        printf("Do you want to continue(Y/N): ");
//        scanf("%c", &wish);
//    }
//    return EXIT_SUCCESS;
//}


//
//int main(){
//    char wish; //initialization is NOT required
//    int n1;
//    int n2;
//    long long int sum;
//    do
//    {
//        printf("Enter First integers : ");
//        scanf("%i", &n1);
//        printf("Enter Second integers : ");
//        scanf("%i", &n2);
//        sum = (long long) n1 + n2; //casting important
//        printf("%d + %d = %lld\n", n1, n2, sum);
//        while (getchar() != '\n'); //clear stdin
//        printf("Do you want to continue(y/n) : ");
//        wish = fgetc(stdin); //scanf("%c",&wish);
//    }while (toupper(wish) == 'Y'); //condition is post checked
//    return EXIT_SUCCESS;
//}

/*
 Accept integers from user until zero is not keyed in.
 display sum and average of all integers keyed before zero
 */

int main(void) {
    int number;
    long long int sum = 0LL;
    int counter = 0;
    float avg = 0.0F;
    do {
        printf("Please enter a integer : ");
        scanf("%i", &number);
        sum = sum + number;
        ++counter;
    } while (number != 0);
    printf("The sum of integers = %lld\n", sum);
    if (counter > 1) {
        avg = (float) sum / (counter - 1);
    }
    printf("Average = %.2f\n", avg);
    return EXIT_SUCCESS;
}




//int main() {
//    int intVar;
//    long long int sum = 0LL;
//    int count = 0;
//    double average = 0.0;
//    do {
//        printf("Please enter a integer : ");
//        scanf("%i", &intVar);
//        sum = sum + intVar;
//        count++;
//    } while (intVar != 0);
//    
//    if (count != 1) {
//        average = (double) sum / (count - 1);
//    }
//    printf("The sum = %lld\tAverage = %.2lf\n", sum, average);
//    return EXIT_SUCCESS;
//}
