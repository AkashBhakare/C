
/****************************************************************************
 
 * Purpose : Data types : Char type                                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           26/02/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*
Character domain: -128 to +127 
unsigned char   : 0 to 255
*/
int main(){
	char grade = 'A';
	char buffer[50];

	_itoa(grade,buffer,2);
	printf("Character : %c\tDecimal : %d\tBinary : %s\n",grade, grade ,buffer);
	printf("Size of character : %zu bytes\n", sizeof(grade));

	return EXIT_SUCCESS;
}
/*

'A' : 65 => 01000001
'B' : 66 => 01000010
'a' : 97 => 01100001

*/

