/****************************************************************************
 *                                                                          *
 * File    : 68_Guess_number                                                        *
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
Guess the secret number in the magician's hat. 
If your guess is too high or too low, you'll get a hint.
 */

//alternative-1

//int main(void) {
//    unsigned int your_guess = 0;
//    unsigned int magic_number = 77;
//    printf("The magic number is between 1 to 100 \n");
//
//    while (your_guess != magic_number) {
//        printf("\nGuess the magic number: ");
//        scanf("%u", &your_guess);
//
//        if (your_guess == magic_number) {
//            printf("Hurray! you got it right\n");
//        } else {
//            if (your_guess < magic_number) {
//                printf("The magic number is greater than %u\n", your_guess);
//            } else {
//                printf("The magic number is Smaller than %u\n", your_guess);
//            }
//        }
//    }
//    return EXIT_SUCCESS;
//}

//alternative-2

#include <time.h>
#include <math.h>
int main(void){
    unsigned int your_guess = 0;
    unsigned int magic_number;
    unsigned int attempts = 0;
    srand(time(NULL));
    magic_number = abs(rand()) % 101;
    printf("The magic number is between 1 to 100 \n");

    while (your_guess != magic_number){
        printf("\nGuess the magic number: ");
        scanf("%u", &your_guess);

        if (your_guess == magic_number) {
            printf("Hurray! you got it right\n");
        } else {
            if (your_guess < magic_number) {
                printf("The magic number is greater than %u\n", your_guess);
            } else {
                printf("The magic number is Smaller than %u\n", your_guess);
            }
        }
        ++attempts;
    }
     printf("\nYou took %u attempts to guess the number !",attempts);
     return EXIT_SUCCESS;
}


