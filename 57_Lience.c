/****************************************************************************
 *                                                                          *
 * File    :57_Lience                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           03/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Check if the citizen is eligible for Permanent Driving license
 */
int main(void)
{
    unsigned int ageOfCitizen;
    bool hasLearnersLicense; //store 1(true)/0(false)
    const unsigned int MIN_AGE_LIMIT = 18;

    printf("Does the citizen have a Learners driving License?\n");
    printf("Enter \'1\' if YES or Enter \'0\' if NO : ");
    scanf("%u", &hasLearnersLicense);

    if (hasLearnersLicense == true)
    {
        printf("Enter the age of Citizen(years) :");
        scanf("%u", &ageOfCitizen);
        if (ageOfCitizen >= MIN_AGE_LIMIT)
        {
            printf("Citizen is Eligible for Permanent Driving License\n");
        }
        else
        {
            printf("Citizen is NOT Eligible for Permanent Driving License\n");
        }
    }
    else
    {
        printf("Citizen is NOT Eligible for Permanent License\n");
    }
    return (EXIT_SUCCESS);
}
