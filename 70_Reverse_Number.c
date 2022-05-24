/****************************************************************************
 *                                                                          *
 * File    :70_Reverse_Number                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/*
 Accept an integer and print its reverse 
 */

/*
 *      r = 0
 *      n = 5893
 * 
 *      d = n % 10      =>  3
 *      r = (r*10) + 3  =>  3
 *      n = n / 10      =>  589
 * 
 *      d = n % 10      =>  9
 *      r = (r *10) + 9 =>  39
 *      n = n / 10      =>  58
 * 
 *      d = n % 10      =>  8
 *      r = (r * 10)+ 8 =>  398
 *      n = n / 10      =>  5
 * 
 *      d = n % 10      =>  5
 *      r = (r * 10) +5 =>  3985
 *      n = n / 10      =>  0
 
 */


//int main(void) {
//    int num;
//    int digit;
//    long long int reverse = 0LL;
//    printf("Enter a integer : ");
//    scanf("%i", &num);
//    printf("the original integer is %d\n", num);
//    num = abs(num);
//    while (num != 0) {
//        digit = num % 10;
//        reverse = (reverse * 10) + digit;
//        num = num / 10;
//    }
//    printf("The reverse is %lld\n", reverse);
//    return EXIT_SUCCESS;
//}



int main(void) {
    int num;
    int digit;
    long long int reverse = 0LL;
    long long tempData;
    char data[20];
    printf("Enter a integer : ");
    scanf("%s", data);

    tempData = atoll(data);

    if (tempData > INT_MAX || tempData < INT_MIN) {
        fprintf(stderr, "Value out of the range of integer (%+d:%+d)\n",
                INT_MIN, INT_MAX);
        exit(EXIT_FAILURE);
    }

    num = tempData;
    printf("the original integer is %d\n", num);
    num = abs(num);
    while (num != 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    printf("The reverse is %lld\n", reverse);
    return EXIT_SUCCESS;
}






