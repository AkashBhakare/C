/****************************************************************************
 *                                                                          *
 * File    : 19_Charater_Float_Ex                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           29/03/20220  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Charater extraction

int main(void)
{
	/*
	char cvar;
	printf("Please enter a charater : ");

	scanf("%c", &cvar);

	printf("Charater = %c\n", cvar);
	*/

    float fvar;
	printf("Please enter a real value : ");
	
	scanf("%f", &fvar);

	printf("real number = %f \n", fvar);

	return 0;

}

