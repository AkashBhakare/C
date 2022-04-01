/****************************************************************************
 *                                                                          *
 * File    : 23_String_Extraction                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date        Reason                                               *
 *           31/02/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*String Extraction*/

int main(void)
{
	//unsigned int id;
	char id[5];
	printf("What's Your ID Number ? ");

	//scanf("%3s", &id);
	scanf("%3s", id);
	scanf("%3c", id);


	printf("Your Id Is %s\n",id);

	return 0;
}
