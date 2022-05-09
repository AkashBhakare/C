/****************************************************************************
 *                                                                          *
 * File    :61_Nested_OR                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/*
 * Check whether a student can be issued a 
 * domicile certificate.
 * The student can be issued the certificate
 * provided he is born in Maharashtra or has
 * been staying in Maharashtra for more than
 * 10 yrs  
 */

#include "stdio.h"
#include <stdlib.h>
#include "ctype.h"

//int main(void)
//{
//    const int MIN_YRS_STAY = 10;
//    int yrsResiState; // number of years staying in the state
//    char isBornInState; // to know whether born in the state
//    printf("Were you born in Maharashtra(Y/N)? :");
//    scanf("%c", &isBornInState);
//    isBornInState = toupper(isBornInState);
//    printf("For how many years are you staying in Maharashtra? ");
//    scanf("%d", &yrsResiState);
//
//    //Alternative-I
//    if (yrsResiState >= MIN_YRS_STAY || isBornInState == 'Y')
//    {
//        printf("Congrats! you can get the Domicile Certificate\n");
//    }
//    else
//    {
//        printf("Sorry! You are not eligible for Domicile Certificate\n");
//    }
//
//    return EXIT_SUCCESS;
//}


//Alternative-II

int main(void)
{
    const int MIN_YRS_STAY = 10;
    int yrsResiState; // number of years staying in the state
    char isBornInState; // to know whether born in the state
    printf("Were you born in Maharashtra(Y/N)? :");
    scanf("%c", &isBornInState);
    //  isBornInState = toupper(isBornInState);
    if (toupper(isBornInState) == 'Y')
    {
        printf("Congrats! you can get the Domicile Certificate\n");
    }
    else
    {
        printf("For how many years are you staying in Maharashtra? ");
        scanf("%d", &yrsResiState);
        if (yrsResiState >= MIN_YRS_STAY)
        {
            printf("Congrats! you can get the Domicile Certificate\n");
        }
        else
        {
            printf("Sorry! You are not eligible for Domicile Certificate\n");
        }
    }
    return EXIT_SUCCESS;
}
