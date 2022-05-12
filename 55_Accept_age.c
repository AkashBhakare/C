/****************************************************************************
 *                                                                          *
 * File    : 55_Accept_age                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age; //stores age of the player
    const int MIN_AGE = 1;
    const int MAX_AGE = 100;

    printf("Please enter the age of the player in years (1-100): ");
    scanf("%i", &age);

    switch (age)
    {
    case 1 ... 17:
        printf("Player belongs to Junior Group\n");
        break;
    case 18 ... 29:
        printf("Player belongs to Senior Group\n");
        break;
    case 30 ... 44:
        printf("Player belongs to Master Group\n");
        break;
    case 45 ... 100:
        printf("Player belongs to Veteran Group\n");
        break;
    default:
        fprintf(stderr, "Invalid Age entered.\n");

    }
    return (EXIT_SUCCESS);
}








/*
int main(void)
{

	int age;

	printf("Please enter the player age :");
	scanf("%i", &age);

	if(age < 18){
		printf("It's Junior Group\n ");
	}else if(age >= 18 && age < 30){
		printf("It's Senior Group\n");
       } else if(age >= 30 && age < 45){
        printf("It's Master Group\n");
	}else if(age >= 45){
		printf("It's is Veteran");
	}
    return 0;
}

*/
