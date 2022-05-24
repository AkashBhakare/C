/****************************************************************************
 *                                                                          *
 * File    :69_palindrome_number                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
/*
Assignment:
Accept an +ve non-zero integer and check whether it is a palindrome
123   => not a plaindrome
12321 = >palindrome
*/


/*
 Accept a three digit number and check whether its palindrome
 */
//alternative-1
//int main(void) {
//    int num;
//    int unit_place;
//    int ten_place;
//    int hundred_place;
//    int reverse;
//    printf("Enter a three digit integer : ");
//    scanf("%i", &num);
//    num = abs(num);
//
//    if (num < 99 || num > 999) {
//        fprintf(stderr, "%d is not a 3 digit integer\n", num);
//        exit(EXIT_FAILURE);
//    }
//
//    unit_place = num % 10;
//    //    printf("digit at unit place %d\n",unit_place);
//
//    ten_place = (num / 10) % 10;
//
//    printf("digit at ten place %d\n", ten_place);
//
//    hundred_place = num / 100;
//    //   printf("digit at hundred place %d\n",hundred_place);
//
//    reverse = (unit_place * 100) + (ten_place * 10) + hundred_place;
//
//    //   printf("The integer is %d\tReverse = %d\n", num,reverse);
//    if (num == reverse) {
//        printf("%d is a palindrome\n", num);
//    } else {
//        printf("%d is not a palindrome\n", num);
//    }
//    return EXIT_SUCCESS;
//}

////Alternative -II
//int main(void) {
//    int num;
//    int unit_place;
//    int hundred_place;
//    const int SMALLEST_3_DIGIT_NUM = 100;
//    const int LARGEST_3_DIGIT_NUM = 999;
//    printf("Enter a three digit integer : ");
//    scanf("%i", &num);
//    num = abs(num);
//
//    if (num >= SMALLEST_3_DIGIT_NUM && num <= LARGEST_3_DIGIT_NUM) {
//        unit_place = num % 10;
//        hundred_place = num / 100;
//
//        if (unit_place == hundred_place) {
//            printf("%d is a palindrome\n", num);
//        } else {
//            printf("%d is not a palindrome\n", num);
//        }
//    } else {
//        fprintf(stderr, "%d is not a 3 digit integer\n", num);
//    }
//    return EXIT_FAILURE;
//}

/*
 Accept a integer and check if it is a palindrome
 * 11
 * 121
 * 1221
 * 1111
 */

int main(void) {
    int num;
    int digit;
    int temp_num;
    long long int reverse = 0LL;
    printf("Enter a integer : ");
    scanf("%i", &num);
    temp_num = num;
    
    while (temp_num != 0) {
        digit = temp_num % 10;
        reverse = (reverse * 10) + digit;
        temp_num = temp_num / 10;
    }

    if (num == reverse) {
        printf("%+d is a palindrome\n", num);
    } else {
        printf("%+d is not a palindrome\n", num);
    }
    return EXIT_SUCCESS;
}
