/****************************************************************************
 *                                                                          *
 * File    :24_Vowel_Consonat                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Vowel

int main(void)
{
	char buffer[100];
	//printf("Enter Only Vowels(only vowels):");
    printf("What's Your Favourite quote:");

	//scanf("%[aeiou]", buffer);
	//scanf("%[a-zA-Z]", buffer);
	scanf("%199[a-zA-Z0-9\t\n]", buffer);

	//printf("The vowels are %s\n", buffer);
	//printf("The String is : %s\n", buffer);
	printf("Quote : %s\n", buffer);
	return 0;
}

