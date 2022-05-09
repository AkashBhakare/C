/****************************************************************************
 *                                                                          *
 * File    : 52_ifelse_oddeven                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int num;
    bool isSuccessful;

    printf("Please enter a integer:");
    /*Scanf returns an integer which is the number of 
     variables to which it has assigned value successfully*/
    isSuccessful = scanf("%i", &num);

    if (isSuccessful == false)
    {
        fprintf(stderr, "Input format is not Valid!\n");
        exit(EXIT_FAILURE);
    }

    /* test for even-ness */
    if ((num % 2) == 0)
    {
        printf("The number %d is even\n", num);
    }
    else
    {
        printf("The number %d is Odd\n", num);
    }

    return EXIT_SUCCESS;
}



//bool isSuccessful;
//    printf("Please enter a integer:");
//    isSuccessful = scanf("%i", &num);
//    if(isSuccessful == false){
//        fprintf(stderr,"Input is not Valid!\n");
//        exit(EXIT_FAILURE);        
//    }
