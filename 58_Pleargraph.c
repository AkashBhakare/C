58_Pleargraph/****************************************************************************
 *                                                                          *
 * File    : 58_Pleargraph                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           04/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/*
 * Given the age display the group the player belongs to
 */

int main(void)
{
    int age; //stores age of the player
    printf("Please enter the age of the player in years : ");
    scanf("%i", &age);

    if (age < 18)
    {
        printf("Player belongs to Junior Group\n");
    }
    else
    {
        if (age >= 18 && age < 30)
        {
            printf("Player belongs Senior to Group\n");
        }
        else
        {
            if (age >= 30 && age < 45)
            {
                printf("Player belongs to Master Group\n");
            }
            else
            {
                if (age >= 45)
                {
                    printf("Player belongs to Veteran Group\n");
                }
            }
        }
    }
    return EXIT_SUCCESS;
}



//int main() {
//    int age; //stores age of the player
//    const int JUNIOR_AGE_LIMIT = 18;
//    const int SENIOR_AGE_LIMIT = 30;
//    const int MASTER_AGE_LIMIT = 45;
//    const int MIN_AGE = 0;
//    printf("Please enter the age of the player in years : ");
//        scanf("%i", &age);
//    // validation  of age 
//    if (age <= MIN_AGE) {
//        fprintf(stderr, "Invalid Age entered. "\
//                "Please enter +ve non-zero value\n");
//        exit(EXIT_FAILURE);
//    }
//
//    if (age < JUNIOR_AGE_LIMIT) {
//        printf("Player belongs to Junior Group\n");
//    } 
//    else 
//    {
//        if (age < SENIOR_AGE_LIMIT) {
//            printf("Player belongs Senior to Group\n");
//        } 
//        else 
//        {
//            if (age < MASTER_AGE_LIMIT) {
//                printf("Player belongs to Master Group\n");
//            } 
//            else 
//            {
//                printf("Player belongs to Veteran Group\n");
//            }
//        }
//    }
//    return (EXIT_SUCCESS);
//}




/*
     // validation  of age 
    if (age <= 0)
    {
        fprintf(stderr, "\nInvalid Age entered. "\
                "Please enter +ve non-zero value");
        exit(EXIT_FAILURE);
    }


 */ 
