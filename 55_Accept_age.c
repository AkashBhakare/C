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
}

