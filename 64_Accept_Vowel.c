64_Accept_Vowel/****************************************************************************
 *                                                                          *
 * File    : 64_Accept_Vowel                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           11/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("\n %c is a VOWEL.", ch);
	}
    else{
    	printf("\n %c is a Non-Vowel.", ch);
	}
    return 0;
}
