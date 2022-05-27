/****************************************************************************
 *                                                                          *
 * File    : 73_Prime_Number                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Accept an integer anc check if it is a prime number2

//
//int main() {
//    int num;
//    int num1;
//    int factor_count = 0;
//    int reminder;
//
//    printf("Enter any integer : ");
//    scanf("%i", &num);
//
//    if (num == 1) {
//        printf("%i is not prime number", num);
//        return (EXIT_SUCCESS);
//    }
//
//    num1 = num;
//    while (num1 != 0) {
//        reminder = num % num1;
//        if (reminder == 0) {
//            ++factor_count;
//        }
//        num1--;
//    }
//    
//    if (factor_count == 2) {
//        printf("%d is prime number", num);
//    } else {
//        printf("%d is not prime number", num);
//
//    }
//
//
//    return 0;
//}
// 2n+1

////2n-3
//int main() {
//    int num;
//    int counter = 2;
//    int factor_count = 0;
//    int reminder;
//
//    printf("Enter any integer : ");
//    scanf("%i", &num);
//
//    if (num == 1) {
//        printf("%i is not prime number", num);
//        return (EXIT_SUCCESS);
//    }
//
//    while (counter != num) {
//        reminder = num % counter;
//        if (reminder == 0) {
//            ++factor_count;
//        }
//        ++counter;
//    }
//    
//    if (factor_count == 0) {
//        printf("%d is prime number", num);
//    } else {
//        printf("%d is not prime number", num);
//
//    }
//    return 0;
//}
//
// n-1
//int main() {
//    int num;
//    int counter = 2;
//    int factor_count = 0;
//    int reminder;
//
//    printf("Enter any integer : ");
//    scanf("%i", &num);
//
//    if (num == 1) {
//        printf("%i is not prime number", num);
//        return (EXIT_SUCCESS);
//    }
//
//    while (counter <= (num/2)) {  
//        reminder = num % counter;
//        if (reminder == 0) {     
//            ++factor_count;
//        }
//        ++counter;
//    }
//    
//    if (factor_count == 0) {
//        printf("%d is prime number", num);
//    } else {
//        printf("%d is not prime number", num);
//
//    }
//    return 0;
//}


//#include <math.h>
//   2(sqrt(n))-1
//int main() {
//    int num;
//    int counter = 2;
//    int factor_count = 0;
//    int reminder;
//    int limit;
//    printf("Enter any integer : ");
//    scanf("%i", &num);
//
//    if (num == 1) {
//        printf("%i is not prime number", num);
//        return (EXIT_SUCCESS);
//    }
//    
//    limit = sqrt(num);
//    while (counter <= limit) {  
//        reminder = num % counter;
//        if (reminder == 0) {     
//            ++factor_count;
//        }
//        ++counter;
//    }
//    
//    if (factor_count == 0) {
//        printf("%d is prime number", num);
//    } else {
//        printf("%d is not prime number", num);
//
//    }
//    return 0;
//}

#include <math.h>
#include <stdbool.h>
int main() {
    int num;
    int counter = 2;
    bool is_prime = true;
    int reminder;
    int limit;
    printf("Enter any integer : ");
    scanf("%i", &num);

    if (num == 1) {
        printf("%i is not prime number", num);
        return (EXIT_SUCCESS);
    }
    
    limit = (int)sqrt(num);
    while (counter <= limit) {  
        reminder = num % counter;
        if (reminder == 0) {     
            is_prime = false;
            break;
        }
        ++counter;
    }
    
    if (is_prime == true) {
        printf("%d is prime number", num);
    } else {
        printf("%d is not prime number", num);

    }
    return 0;
}
